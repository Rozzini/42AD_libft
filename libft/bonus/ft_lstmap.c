/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:36:15 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 22:36:15 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
        return ;
    del(lst->content);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *node;

    if (lst == NULL)
        return ;

    while (*lst)
    {
        node = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = node;
    }
}

t_list *ft_lstlast(t_list *lst)
{
    t_list  *node;
    if (lst == NULL)
        return (0);
    node = lst;
    while (node->next != NULL)
    {
        node = node->next;
    }
    return (node);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last_node;

    if (lst == NULL)
        *lst = new;
    else
    {
        last_node = ft_lstlast(&lst);
        last_node->next = new;
    }
}

t_list *ft_lstnew(void *content)
{
    t_list  *node;

    node = (t_list *)malloc(sizeof(*node));

    if (node == NULL)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *node;
    t_list  *new_node;
    t_list  *new_list;
    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);
    new_list = NULL;
    node = lst;
    while (lst)
    {
        new_node = ft_lstnew(f(node->content));
        if (new_list == NULL)
            new_list = new_node;
        else    
            ft_lstadd_back(new_list, new_node);
        node = node->next;
    }
    ft_lstclear(lst, del);
    return (new_list);
}
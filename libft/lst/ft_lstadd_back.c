/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:02:21 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 22:02:21 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

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
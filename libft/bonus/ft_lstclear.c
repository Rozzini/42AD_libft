/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:21:08 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 22:21:08 by mraspors         ###   ########.fr       */
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

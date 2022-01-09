/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:25:20 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 22:25:20 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *node;

    if (lst == NULL || f == NULL)
        return ;
    node  = lst;
    while (node->next != NULL)
    {
        f(node->content);
        node = node->next;
    }
}
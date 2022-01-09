/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:53:30 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 21:53:30 by mraspors         ###   ########.fr       */
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
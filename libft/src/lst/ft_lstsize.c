/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:47:55 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/09 21:47:55 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    t_list  *node;
    if (lst == NULL)
        return (0);
    node = lst;
    while (node->next != NULL)
    {
        size++;
        node = node->next;
    }
    return (size);
}
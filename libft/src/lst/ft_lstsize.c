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

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		size;

	size = 0;
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

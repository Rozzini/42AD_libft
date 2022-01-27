/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 08:19:11 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/22 08:51:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*pointer;
	size_t	i;

	i = 0;
	if (nitems == 0 || size == 0)
		return (NULL);
	else
	{
		pointer = malloc(nitems * size);
		while (i < nitems * size)
			pointer[i++] = '\0';
		return (pointer);
	}
}

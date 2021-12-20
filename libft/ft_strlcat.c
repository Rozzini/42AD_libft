/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:29:03 by mraspors          #+#    #+#             */
/*   Updated: 2021/06/28 17:56:27 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				count(char *dest)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}

int				find_null(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				null_pos;
	int				result;

	result = 0;
	i = 0;
	null_pos = find_null(dest);
	while (src[i] != '\0' && i < size)
	{
		dest[i + null_pos] = src[i];
		i++;
	}
	dest[null_pos + i] = '\0';
	result = count(dest);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 07:54:35 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/22 07:54:36 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*s1;
	const char	*s2;
	size_t		i;
	int			result;

	s1 = (const char *) str1;
	s2 = (const char *) str2;
	i = 0;
	result = 0;
	while (i < n)
	{
		result = result + (s1[i] - s2[i]);
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:23:35 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/22 20:23:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
size_t	ft_len(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (s == NULL || ft_len((char *)s) < (size_t)start + len || len == 0)
		return (NULL);
	res = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
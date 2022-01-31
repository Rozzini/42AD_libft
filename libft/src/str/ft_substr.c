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
#include "libft.h"

size_t	ft_mem_l(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	if (len > ft_strlen(s))
		i = ft_strlen(s) - start;
	else
		i = len + 1;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (start > ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	i = ft_mem_l(s, start, len);
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
		if (s[start + i] == '\0')
			break ;
	}
	str[i] = '\0';
	return (str);
}

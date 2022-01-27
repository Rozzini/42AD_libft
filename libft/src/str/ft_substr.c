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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	char			*str;

	size = ft_strlen(s);
	if (s == NULL || size < (unsigned int)len + start)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + start + 1));
	if (!str)
		return (NULL);
	size = 0;
	while (size < (unsigned int)len)
	{
		str[size] = s[start + size];
		size++;
	}
	str[size] = '\0';
	return (str);
}

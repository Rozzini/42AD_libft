/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 21:52:57 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/23 15:06:16 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_len((char *)s1) + ft_len((char *)s2);
	result = (char *)malloc((len + 1) * sizeof(char));
	ft_strcpy(result, (char *)s1, 0);
	ft_strcpy(result, (char *)s2, ft_len((char *)s1));
	result[len + 1] = '\0';
	return (result);
}

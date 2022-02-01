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
#include "libft.h"

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
	int		len;
	char	*result;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strcpy(result, (char *)s1, 0);
	ft_strcpy(result, (char *)s2, ft_strlen((char *)s1));
	result[len] = '\0';
	return (result);
}

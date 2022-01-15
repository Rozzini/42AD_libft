/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 08:07:10 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/22 08:07:11 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
			counter = 0;
			while (big[i + counter] == little[counter] && i + counter < len)
			{
				if (counter == len)
					return ((char *)&big[i]);
				counter++;
			}	
		i++;
	}
	return (NULL);
}
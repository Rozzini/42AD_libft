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
	big = NULL;
	little = NULL;
	len = 0;
	i = 0;
	counter = 0;
	/*while (big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			counter = 0;
			while (counter <= len)
			{
				if (counter == len)
					return ((char *)&big[i]);
				if (big[i + counter] != little[counter])
					break ;
			}	
		}
		i++;
	}*/	
	return (NULL);
}

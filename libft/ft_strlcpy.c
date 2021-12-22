/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:37:02 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/22 14:37:05 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	while (i < size)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		l++;
		i++;
	}
	dst[i] = '\0';
	return (l);
}

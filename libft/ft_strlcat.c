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
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	total_len;

	i = 0;
	total_len = 0;
	dst_len = (size_t)ft_strlen(dst);
	src_len = (size_t)ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size >= dst_len)
		total_len = src_len + dst_len;
	else
		total_len = (src_len + size);
	while (i < (size - dst_len - 1) && src[i] != '\0' && size > dst_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}

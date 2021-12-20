/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:51:56 by mraspors          #+#    #+#             */
/*   Updated: 2021/06/27 17:59:47 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;
	int				first_null_flag;

	first_null_flag = 0;
	length = 0;
	i = 0;
	while (i < size)
	{
		if (src[i] == '\0')
			first_null_flag = 1;
		if (src[i] != '\0' && first_null_flag == 0)
		{
			dest[i] = src[i];
			length++;
		}
		else
			dest[i] = '\0';
		i++;
	}
	return (length);
}

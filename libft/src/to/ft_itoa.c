/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:39:58 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/31 12:39:58 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len(int n)
{
	int	len;
	int	nb;

	len = 0;
	nb = n;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (10);
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		nb;
	int		n_len;

	nb = n;
	n_len = ft_len(nb);
	if (n < 0)
		n_len++;
	str_n = (char *)malloc(sizeof(char) * (n_len + 1));
	str_n[n_len--] = '\0';
	while (n_len >= 0)
	{
		if (n < 0 && n_len == 0)
		{
			str_n[0] = '-';
			break ;
		}
		if (n < 0)
			str_n[n_len] = ((nb % 10) * -1) + '0';
		else
			str_n[n_len] = nb % 10 + '0';
		nb /= 10;
		n_len--;
	}
	return (str_n);
}

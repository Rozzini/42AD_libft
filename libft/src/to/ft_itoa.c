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

int	len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ret_ex(int n, char *str)
{
	char	*i_min;
	int		i;

	i = 0;
	i_min = "-2147483648";
	if (n == 0)
	{
		str[0] = '0';
	}
	else
	{
		str[i] = i_min[i];
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i--] = '\0';
	if (n == 0 || n == -2147483648)
	{
		ret_ex(n, str);
		return (str);
	}
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

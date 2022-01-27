/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:05:31 by mraspors          #+#    #+#             */
/*   Updated: 2021/06/30 19:37:29 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	check(char *str, int *count_negative, int *i)
{
	if (*str == 45)
		(*count_negative)++;
	(*i)++;
}

int	ft_atoi(char *str)
{
	int	i;
	int	integer;
	int	count_negative;

	integer = 0;
	count_negative = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
		check(&str[i], &count_negative, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		integer += (str[i] - '0');
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			integer *= 10;
		else
			break ;
		i++;
	}
	if (count_negative % 2 == 1)
		integer *= -1;
	return (integer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 08:10:46 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/21 08:10:49 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	char	*str;
	int		i;
	int		result;

	result = -1;
	i = 0;
	str = s;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			result = i;
		i++;
	}
	if (str[i] == '\0' && result == -1)
		return (&str[i]);
	else
		return (&str[result]);
}

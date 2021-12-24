/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:08:14 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/23 15:08:16 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;
	ont	set_len;
	int	start;
	int	end;

	i = 0;
	len = ft_len(s1);
	set_len = ft_len(set);
	while (s1[i] != '\0')
	{
		
	}
}

int main()
{
	char	s[50] = "ababcdaefaa";
	char *s1;
	char const *set = "aba";
	s1 = ft_strtrim(s, set);
	printf("%s\n", s1);
	return 0;
}


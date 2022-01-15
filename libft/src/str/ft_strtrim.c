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
#include "libft.h"

int	ft_checkset(char c, char const *set)
{
	int		i;
	i = 0;
	while(set[i] != '\0')
	{
		if(c == set[i])
			return (1);
		i++;
	}
	return 0;
}

int	ft_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while(s1[i] !='\0')
	{

		if(ft_checkset(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while(len - i >= 0)
	{
		if(ft_checkset(s1[len - i - 1], set) == 0)
			return (len - i - 1);
		i++;
	}
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*returnstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	returnstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (returnstr == NULL)
		return (NULL);
	ft_strlcpy(returnstr, &s1[start], end - start + 1);
	return (returnstr);
}


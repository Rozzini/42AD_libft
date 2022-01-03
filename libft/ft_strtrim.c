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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
printf("aaaaaaaa copy\n");
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

char	*ft_strdup(const char *string)
{
	char	*str;
	int		i;
printf("aaaaaaaa strup\n");
	i = 0;
	while (string[i] != '\0')
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (string[i] != '\0')
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_len(const char *s)
{
	size_t	i;
printf("aaaaaaaa len\n");
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int			ft_checkset(char c, char const *set)
{
	int		i;
	i = 0;
	while(set[i] != '\0')
	{
		printf("set: %d\n", i);
		if(c == set[i])
			return (1);
		i++;
	}
	return 0;
}
int			ft_start(const char *s1, const char *set)
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

int			ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_len(s1);
	i = 0;
	while(len - i >= 0)
	{
		if(ft_checkset(s1[len - i], set) == 0)
			return (len - i);
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
		//return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	printf("start: %d\n", start);
	printf("end: %d\n", end);
	if (start >= end)
		return (ft_strdup(""));
	returnstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (returnstr == NULL)
		return (NULL);
	ft_strlcpy(returnstr, &s1[start], end - start + 1);
	return (returnstr);
}
int main()
{
	char s[50] = "ABAcatcatcatBBAA";
	printf("%s\n", s);
	char set[3] = "AB";
	printf("%s\n", ft_strtrim(s, set));
	return 0;
}


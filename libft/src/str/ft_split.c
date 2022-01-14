/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:40:29 by mraspors          #+#    #+#             */
/*   Updated: 2021/12/31 12:40:29 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int     ft_count(char const *s, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;

    while (s[i] != '\0')
    {
        if(s[i] == c)
            i++;
        else
        {
            counter++;
            while (s[i] != c && s[i] != '\0')
                i++;
        }
    }
    return (counter + 1);
}

char    *ft_add_word(char const *s, int start, int end)
{
    int     i;
    char    *word;

    word = malloc((end - start + 1) * sizeof(char));
    if (word == NULL)
        return NULL;
    i = 0;
    while (i < end - start)
    {
        word[i] = s[start + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    int i;
    int j;
    int index;
    char    **result;
    
    result =  malloc((ft_count(s, c) + 1) * sizeof(char *));

    if (s == NULL || result == NULL)
        return NULL;
    i = 0;
    j = 0;
    index = 0;
    while(s[i] != '\0')
    {
        if (s[i] != c)
        {
            index = i;
            while (s[i] != c && s[i] != '\0')
                i++;
            result[j++] = ft_add_word(s, index, i);
        }
        else
            i++;
    }
    result[j] = NULL;
    return (result);
}
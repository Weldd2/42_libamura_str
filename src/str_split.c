/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:53:40 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/13 17:06:49 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static int	str_count_words(char const *s, char c)
{
	int	i;
	int	is_word;
	int	r;

	r = 0;
	is_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			r++;
			is_word = 1;
		}
		else if (s[i] == c)
		{
			is_word = 0;
		}
		i++;
	}
	return (r);
}

static int	str_getword_l(char *s, char c)
{
	int	word_l;

	word_l = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		word_l++;
		s++;
	}
	return (word_l);
}

static char	*a(char *s, char c)
{
	int	i;

	i = str_strlen(s) - 1;
	while (*(s + i) && *(s + i) == c)
		i--;
	while (*s && *s == c)
		s++;
	return (s);
}

char	**str_split(char *s, char c)
{
	char	**r;
	int		word_l;
	int		i;

	i = 0;
	r = mem_malloc(sizeof(char *) * (str_count_words(s, c) + 1));
	if (!r)
		return (NULL);
	s = a(s, c);
	while (*s)
	{
		word_l = str_getword_l(s, c);
		r[i] = (char *)mem_malloc(sizeof(char) * (word_l + (word_l != 0)));
		if (!r[i])
			return (NULL);
		s = a(s, c);
		if (!*s)
			break ;
		str_strlcpy(r[i], s, word_l + 1);
		s += word_l;
		i++;
		s = a(s, c);
	}
	r[i] = NULL;
	return (r);
}

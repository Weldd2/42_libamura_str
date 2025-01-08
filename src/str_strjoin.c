/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:46:02 by marvin            #+#    #+#             */
/*   Updated: 2025/01/07 16:35:43 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	s = (char *)mem_calloc((str_strlen(s2) + str_strlen(s1) + 1), sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		s[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

char	*str_strvjoin(char *str, ...)
{
	va_list	ap;
	char	*r;
	char	*next_str;
	char	*temp;

	if (!str)
		return (NULL);
	r = (char *)mem_arena_alloc(sizeof(char));
	if (!r)
		return (NULL);
	r[0] = '\0';
	va_start(ap, str);
	next_str = str;
	while (next_str != NULL)
	{
		temp = r;
		r = str_strjoin(r, next_str);
		free(temp);
		if (!r)
			return (va_end(ap), NULL);
		next_str = va_arg(ap, char *);
	}
	va_end(ap);
	return (r);
}

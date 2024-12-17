/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:09:43 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 18:09:44 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	char	max;

	if (start > str_strlen(s))
		return (str_strdup(""));
	i = 0;
	if (str_strlen(s) - start > len)
		max = len;
	else
		max = str_strlen(s) - start;
	r = malloc((max * sizeof(char)) + 1);
	if (!r)
		return (NULL);
	while (s[i + start] && i < len)
	{
		r[i] = s[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}

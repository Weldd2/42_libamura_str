/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:10:25 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 19:13:08 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		c;

	if (s == NULL || f == NULL)
		return (NULL);
	c = 0;
	r = (char *)mem_arena_alloc(sizeof(char) * (str_strlen(s) + 1));
	if (!r)
		return (NULL);
	while (s[c])
	{
		r[c] = f(c, s[c]);
		c++;
	}
	r[c] = '\0';
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_extract_sub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:09:43 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:51:05 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_extract_sub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = 0;
	r = mem_calloc(len + 1, sizeof(char));
	if (!r || !s)
		return (NULL);
	while (s[i + start] && i < len)
	{
		r[i] = s[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}

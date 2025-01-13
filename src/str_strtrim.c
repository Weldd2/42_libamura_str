/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:10:13 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/13 17:06:11 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*r;
	char	*r_cpy;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = (char *)(s1 + str_strlen(s1) - 1);
	while (*start && str_strchr(set, *start))
		start++;
	while (end >= start && str_strchr(set, *end))
		end--;
	r = (char *)mem_malloc(1 + (end - start + 1) * sizeof(char));
	if (!r)
		return (NULL);
	r_cpy = r;
	while (start <= end)
	{
		*r = *start;
		r++;
		start++;
	}
	*r = '\0';
	return (r_cpy);
}

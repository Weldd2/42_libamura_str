/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:27:05 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 17:59:17 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (haystack[i] && len > i)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && len > i + j)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

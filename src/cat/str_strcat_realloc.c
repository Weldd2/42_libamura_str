/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strcat_realloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:18:56 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:27:22 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_strcat_realloc(char **dest, char *src, size_t realloc_size)
{
	int	dest_len;
	int	src_len;
	int	i;
	int	j;

	if (*dest == NULL)
		return ;
	dest_len = str_strlen(*dest);
	src_len = str_strlen(src);
	i = 0;
	while (i < src_len)
	{
		str_realloc_add(dest, realloc_size);
		j = 0;
		while (j < realloc_size && i < src_len)
		{
			(*dest)[dest_len + i] = src[i];
			i++;
			j++;
		}
	}
	(*dest)[dest_len + src_len] = '\0';
}

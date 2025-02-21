/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strsplitchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 04:57:26 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/13 20:27:18 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strsplitchar(char *str)
{
	size_t	length;
	char	*char_array;
	int		i;

	if (str == NULL)
		return (NULL);
	length = str_strlen(str);
	char_array = (char *)mem_malloc((length + 1) * sizeof(char));
	if (char_array == NULL)
		return (NULL);
	i = 0;
	while (i < (int)length)
	{
		char_array[i] = str[i];
		i++;
	}
	char_array[length] = '\0';
	return (char_array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_slice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:40:28 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:40:35 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_slice(char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;

	if (!str)
		return ;
	str_len = str_strlen(str);
	if (start >= str_len)
	{
		str[0] = '\0';
		return ;
	}
	i = 0;
	while (i < len && (start + i) < str_len)
	{
		str[i] = str[start + i];
		i++;
	}
	str[i] = '\0';
}

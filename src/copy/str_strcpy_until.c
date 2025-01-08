/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strcpy_until.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:12:03 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 16:21:40 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	str_strcpy_until(char *dst, char *src, char until)
{
	int	i;

	i = 0;
	while (src[i] != until && src[i] != '\0')
		i++;
	if (dst != NULL)
		str_strlcpy(dst, src, i + 1);
	if (src[i] != until)
		return (-1);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strcat_until.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:35:28 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:27:15 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	str_strcat_until(char *dest, char *src, char until)
{
	int	i;
	int	j;

	i = 0;
	j = str_strlen(dest);
	while (src[i] != '\0' && src[i] != until)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = src[i];
	dest[j + 1] = '\0';
	return (i + j);
}

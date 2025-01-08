/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:01:42 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 19:24:33 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_realloc(char **str, size_t new_size)
{
	char	*cpy;
	size_t	old_size;
	size_t	limit;

	old_size = str_strlen(*str);
	cpy = mem_calloc(new_size, sizeof(char));
	limit = old_size;
	if (new_size < old_size)
		limit = new_size;
	mem_memcpy(cpy, *str, limit);
	free(*str);
	*str = cpy;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_realloc_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:01:42 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/07 18:22:17 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_realloc_add(char **str, size_t added_size)
{
	char	*cpy;
	size_t	new_size;
	size_t	old_size;

	old_size = str_strlen(*str);
	new_size = old_size + added_size;
	cpy = mem_calloc(new_size + 1, sizeof(char));
	mem_memcpy(cpy, *str, old_size);
	free(*str);
	*str = cpy;
}

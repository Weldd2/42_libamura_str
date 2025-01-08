/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_replace_sub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:40:51 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:40:58 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_replace_sub(char **str, unsigned int start, size_t len)
{
	char	*sub;

	if (!str || !(*str))
		return ;
	sub = mem_calloc(len + 1, sizeof(char));
	if (!sub)
		return ;
	mem_memcpy(sub, *str + start, len);
	free(*str);
	*str = sub;
}

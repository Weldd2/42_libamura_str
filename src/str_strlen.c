/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:36:22 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 17:59:09 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	str_strlen(const char *s)
{
	const char		*s_cpy;
	size_t			compteur;

	s_cpy = s;
	compteur = 0;
	while (*s_cpy)
	{
		compteur++;
		s_cpy++;
	}
	return (compteur);
}

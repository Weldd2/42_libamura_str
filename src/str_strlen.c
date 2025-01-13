/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:36:22 by marvin            #+#    #+#             */
/*   Updated: 2025/01/12 18:35:43 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	str_strlen(const char *s)
{
	const char		*s_cpy;
	size_t			compteur;

	if (s == NULL)
		return (0);
	s_cpy = s;
	compteur = 0;
	while (*s_cpy)
	{
		compteur++;
		s_cpy++;
	}
	return (compteur);
}

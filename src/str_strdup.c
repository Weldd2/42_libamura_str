/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:41:13 by marvin            #+#    #+#             */
/*   Updated: 2024/12/19 05:01:02 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;
	size_t	compteur;

	compteur = 0;
	s_len = str_strlen(s);
	s_cpy = mem_mgc_alloc((sizeof(char) * s_len) + 1);
	if (!s_cpy)
		return (NULL);
	while (compteur < s_len)
	{
		s_cpy[compteur] = s[compteur];
		compteur++;
	}
	s_cpy[compteur] = '\0';
	return (s_cpy);
}

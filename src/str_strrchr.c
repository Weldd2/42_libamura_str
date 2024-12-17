/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:09:57 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 18:09:59 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*str_strrchr(char *s, int c)
{
	char	*last_occurrence;
	int		i;

	i = 0;
	last_occurrence = NULL;
	while (1)
	{
		if (s[i] == (char)c)
			last_occurrence = (s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (last_occurrence);
}

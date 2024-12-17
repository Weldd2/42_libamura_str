/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:21:47 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 02:38:50 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strrchr(char *s, int c)
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

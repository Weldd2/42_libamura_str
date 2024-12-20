/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:12:17 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 17:58:47 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	c;

	c = 0;
	while (*s)
	{
		f(c, s);
		c++;
		s++;
	}
}

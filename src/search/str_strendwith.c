/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_strendwith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:57:57 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 18:01:26 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

int	str_strendwith(char *string, char *test)
{
	int	str_l;
	int	test_l;
	int	i;
	int	j;
	int	valid;

	valid = 1;
	str_l = (int)str_strlen(string);
	test_l = (int)str_strlen(test);
	i = str_l - test_l;
	j = 0;
	while (i < str_l)
	{
		if (string[i] != test[j])
			valid = 0;
		i++;
		j++;
	}
	return (valid);
}

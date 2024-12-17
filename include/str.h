/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:14:22 by antoinemura       #+#    #+#             */
/*   Updated: 2024/12/17 19:12:23 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "mem.h"

size_t	str_strlen(const char *s);
size_t	str_strlcpy(char *dst, const char *src, size_t size);
size_t	str_strlcat(char *dest, const char *src, size_t size);
char	*str_strchr(const char *s, int c);
char	*str_strrchr(char *s, int c);
int		str_strncmp(const char *s1, const char *s2, size_t n);
char	*str_strnstr(const char *s, const char *c, size_t len);
char	*str_strmapi(char const *s, char (*f)(unsigned int, char));
void	str_striteri(char *s, void (*f)(unsigned int, char *));
int		str_strstartwith(char *string, char *test);
int		str_strendwith(char *string, char *test);
char	*str_strdup(const char *s);
char	*str_substr(char const *s, unsigned int start, size_t len);
char	*str_strjoin(char const *s1, char const *s2);
char	*str_strtrim(char const *s1, char const *set);
char	**str_split(char *s, char c);
int		str_strequals(char *s1, char *s2);
char	*str_strvjoin(char *str, ...);

#endif

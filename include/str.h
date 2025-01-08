/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:14:22 by antoinemura       #+#    #+#             */
/*   Updated: 2025/01/08 15:55:20 by antoinemura      ###   ########.fr       */
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

/**
 * Searches for the first occurrence of the substring `needle` within the 
 * string `haystack`, considering at most `len` characters from `haystack`.
 *
 * NOTE: The search stops upon finding the first full match of `needle` within 
 *       the specified length or when the end of `haystack` is reached. 
 *       If `needle` is an empty string, the function returns `haystack`.
 *
 * @param[in] haystack The string in which to search for the substring.
 * @param[in] needle   The substring to search for within `haystack`.
 * @param[in] len      The maximum number of characters to examine in `haystack`
 *
 * @return A pointer to the beginning of the first occurrence of `needle` in 
 *         `haystack`, if found within the first `len` characters. If 
 *         `needle` is not found within that range, returns NULL.
 */
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
size_t	str_strcpy_until(char *dst, char *src, char until);
size_t	str_strcat_until(char *dest, char *src, char until);
void	str_realloc_add(char **str, size_t added_size);
void	str_realloc(char **str, size_t new_size);
void	str_strcat_realloc(char **dest, char *src, size_t realloc_size);
int		str_strcontains(char *str, char c);
char	*str_strsplitchar(char *str);

/**
 * Extracts a substring from the given string `s`, starting at index `start`
 * and copying at most `len` characters.
 *
 * NOTE: The resulting substring is stored in newly allocated memory.
 *       It is the caller's responsibility to free this memory.
 *
 * @param[in] s      The source string.
 * @param[in] start  The starting index within `s`.
 * @param[in] len    The maximum number of characters to copy.
 *
 * @return A newly allocated substring, or NULL if allocation fails or `s` 
 * is NULL.
 */
char	*str_extract_sub(char const *s, unsigned int start, size_t len);

/**
 * Replaces the content of the string pointed to by `str` with a new substring
 * taken from the original string, starting at index `start` and copying at most
 * `len` characters. The original string is freed.
 *
 * NOTE: The pointer `str` will be updated to the newly allocated substring.
 *       If `str` is NULL or if allocation fails, nothing is changed.
 *
 * @param[in,out] str   Address of the string pointer to modify.
 *                      The original string will be freed, and replaced by the 
 *                      new one.
 * @param[in]     start The starting index within the original string.
 * @param[in]     len   The maximum number of characters to copy.
 *
 * @return None.
 */
void	str_replace_sub(char **str, unsigned int start, size_t len);

/**
 * Modifies the string `str` in place by keeping only the substring
 * that starts at index `start` and has a maximum length of `len`.
 * Characters outside this range are removed from the string.
 *
 * NOTE: No new memory is allocated. The string is altered directly.
 *       If `start` is greater than or equal to the string length,
 *       the string becomes empty.
 *
 * @param[in,out] str   The string to modify in place.
 * @param[in]     start The starting index within `str`.
 * @param[in]     len   The maximum number of characters to keep.
 *
 * @return None.
 */
void	str_slice(char *str, unsigned int start, size_t len);

#endif

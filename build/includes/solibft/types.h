/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:27:45 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 17:07:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLIBFT_TYPES_H
# define SOLIBFT_TYPES_H

# include <unistd.h>
# include <stdlib.h>
# include <sotypes.h>

typedef struct s_solibft
{
	/*stdlib.h*/
	int		(*atoi)(const char *nptr);
	void	*(*calloc)(t_solib *solib, size_t nmemb, size_t size);
	char	*(*itoa)(t_solib *solib, int n);
	/*stdio.h*/
	void	(*putchar)(char c, int fd);
	void	(*putendl)(char *s, int fd);
	void	(*putnbr)(int n, int fd);
	void	(*putstr)(char *s, int fd);
	/*ctype.h*/
	int		(*isalnum)(int c);
	int		(*isalpha)(int c);
	int		(*isascii)(int c);
	int		(*isdigit)(int c);
	int		(*isprint)(int c);
	int		(*tolower)(int c);
	int		(*toupper)(int c);
	/*string.h*/
	void	(*bzero)(void *s, size_t n);
	void	*(*memchr)(const void *s, int c, size_t n);
	int		(*memcmp)(const void *s1, const void *s2, size_t n);
	void	*(*memcpy)(void *dest, const void *src, size_t n);
	void	*(*memmove)(void *dest, const void *src, size_t n);
	void	*(*memset)(void *dst, int c, size_t n);
	char	**(*split)(char const *s, char c);
	char	*(*strchr)(const char *str, int c);
	char	*(*strdup)(const char *s);
	void	(*striteri)(char *s, void (*f)(unsigned int, char*));
	char	*(*strjoin)(char const *s1, char const *s2);
	size_t	(*strlcat)(char *dst, const char *src, size_t size);
	size_t	(*strlcpy)(char *dst, const char *src, size_t sz);
	size_t	(*strlen)(const char *s);
	char	*(*strmapi)(char const *s, char (*f)(unsigned int, char));
	void	(*strmcat)(char **dst, char *src);
	int		(*strncmp)(const char *s1, const char *s2, size_t n);
	char	*(*strnstr)(const char *s,	const char *needle, size_t n);
	char	*(*strrchr)(const char *s, int c);
	char	*(*strtrim)(char const *s1, char const *set);
	char	*(*substr)(char const *s, size_t start, size_t len);
}	t_solibft;

#endif
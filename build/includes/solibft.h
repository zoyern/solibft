/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solibft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:59:30 by marvin            #+#    #+#             */
/*   Updated: 2024/04/16 22:20:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLIBFT_H
# define SOLIBFT_H

#include <solibft/types.h>

typedef struct s_solibft		t_solibft;
typedef struct s_soctype		t_soctype;
typedef struct s_sostdio		t_sostdio;
typedef struct s_sostdlib		t_sostdlib;
typedef struct s_sostring		t_sostring;
typedef struct s_solibft_funcs	t_solibft_funcs;
typedef struct s_solibft_memory	t_solibft_memory;

typedef struct s_solibft_memory
{
	int		(*atoi)(const char *nptr);
	void	*(*calloc)(t_solibft *solibft, size_t nmemb, size_t size);
	char	*(*itoa)(t_solibft *solibft, int n);
}	t_solibft_memory;

typedef struct s_solibft_funcs
{
	/*stdlib.h*/
	int		(*atoi)(const char *nptr);
	void	*(*calloc)(t_solibft *solibft, size_t nmemb, size_t size);
	char	*(*itoa)(t_solibft *solibft, int n);
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
}	t_solibft_funcs;

typedef struct s_solibft
{
	t_solibft_memory	*memory;
	t_solibft_funcs		*funcs;
	t_soctype			*soctype;
	t_sostdio			*sostdio;
	t_sostdlib			*sostdlib;
	t_sostring			*sostring;
	int					(*close)(t_solibft *solib, int state);
	void				*(*malloc)(t_solibft *solib, size_t size);
	int					(*free)(t_solibft *solib, void *ptr);
}	t_solibft;

t_solibft	*sonewlibft(void);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:55 by marvin            #+#    #+#             */
/*   Updated: 2024/04/11 21:26:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOSTRING_H
# define SOSTRING_H

#include <solibft/all.h>

typedef struct s_sostring
{
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
}	t_sostring;

int		sonewstring(t_solibft *solibft);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t sz);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_strmcat(char **dst, char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s,	const char *needle, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, size_t start, size_t len);

#endif
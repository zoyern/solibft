/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soctype.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:23:38 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 12:23:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <solibft/all.h>

void	sostring_funcs2(t_solibft *solibft)
{
	solibft->funcs->strncmp = ft_strncmp;
	solibft->funcs->strnstr = ft_strnstr;
	solibft->funcs->strrchr = ft_strrchr;
	solibft->funcs->strtrim = ft_strtrim;
	solibft->funcs->substr = ft_substr;
}

void	sostring_funcs(t_solibft *solibft)
{
	if (!solibft->funcs)
		return ;
	solibft->funcs->bzero = ft_bzero;
	solibft->funcs->memchr = ft_memchr;
	solibft->funcs->memcmp = ft_memcmp;
	solibft->funcs->memcpy = ft_memcpy;
	solibft->funcs->memmove = ft_memmove;
	solibft->funcs->memset = ft_memset;
	solibft->funcs->split = ft_split;
	solibft->funcs->strchr = ft_strchr;
	solibft->funcs->strdup = ft_strdup;
	solibft->funcs->striteri = ft_striteri;
	solibft->funcs->strjoin = ft_strjoin;
	solibft->funcs->strlcat = ft_strlcat;
	solibft->funcs->strlcpy = ft_strlcpy;
	solibft->funcs->strlen = ft_strlen;
	solibft->funcs->strmapi = ft_strmapi;
	solibft->funcs->strmcat = ft_strmcat;
	sostring_funcs2(solibft);
}

void	sonewstring2(t_sostring	*sostring)
{
	sostring->strncmp = ft_strncmp;
	sostring->strnstr = ft_strnstr;
	sostring->strrchr = ft_strrchr;
	sostring->strtrim = ft_strtrim;
	sostring->substr = ft_substr;
}

int		sonewstring(t_solibft *solibft)
{
	t_sostring	*sostring;

	if (!solibft)
		return (1);
	sostring = (t_sostring *)malloc(sizeof(t_sostring));
	sostring->bzero = ft_bzero;
	sostring->memchr = ft_memchr;
	sostring->memcmp = ft_memcmp;
	sostring->memcpy = ft_memcpy;
	sostring->memmove = ft_memmove;
	sostring->memset = ft_memset;
	sostring->split = ft_split;
	sostring->strchr = ft_strchr;
	sostring->strdup = ft_strdup;
	sostring->striteri = ft_striteri;
	sostring->strjoin = ft_strjoin;
	sostring->strlcat = ft_strlcat;
	sostring->strlcpy = ft_strlcpy;
	sostring->strlen = ft_strlen;
	sostring->strmapi = ft_strmapi;
	sostring->strmcat = ft_strmcat;
	sonewstring2(sostring);
	sostring_funcs(solibft);
	solibft->sostring = sostring;
	return (0);
}
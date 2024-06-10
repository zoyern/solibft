/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:15:09 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 15:05:01 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

char	*ft_strdup(t_solib *solib, const char *s)
{
	size_t	len;
	char	*t;

	if (!s)
		return (0);
	len = ft_strlen(s);
	t = (char *)solib->malloc(solib, sizeof(char) * (len + 1));
	if (!t)
		return (0);
	while (*s)
		*t++ = *s++;
	*t = 0;
	return (t -= len);
}
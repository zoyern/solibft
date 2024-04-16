/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:15:09 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:15:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

char	*ft_strdup(const char *s)
{
	char	*out;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	out = malloc(sizeof(char) * (s_len + 1));
	if (!out)
		return (0);
	ft_strlcpy(out, s, s_len + 1);
	out[s_len] = 0;
	return (out);
}
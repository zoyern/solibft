/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:18:37 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:18:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		out_len;
	int		k;

	out_len = ft_strlen(s);
	out = malloc(sizeof(char) * (out_len + 1));
	if (!out)
		return (0);
	k = -1;
	while (s[++k])
		out[k] = f(k, s[k]);
	out[out_len] = '\0';
	return (out);
}
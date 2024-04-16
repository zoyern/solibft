/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:19:07 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:19:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

char	*ft_strnstr(const char *s,	const char *needle, size_t n)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)s);
	if (!n)
		return (NULL);
	while (*s && n-- >= needle_len)
	{
		if (!ft_strncmp(s++, needle, needle_len))
			return ((char *)(s -= 1));
	}
	return (NULL);
}
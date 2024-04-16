/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:19:11 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:19:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) - 1;
	if (!c)
		return ((char *)s + len + 1);
	s += len;
	while (len-- + 1)
		if (*s-- == (char)c)
			return ((char *)(s += 1));
	return (NULL);
}
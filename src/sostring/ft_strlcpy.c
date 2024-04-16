/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:18:18 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:18:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	len;

	len = (ft_strlen(src));
	if (!sz)
		return (len);
	while (*src && sz-- - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
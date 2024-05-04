/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:00:40 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 17:31:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

void	*ft_calloc(t_solib *solib, size_t nmemb, size_t size)
{
	void	*t;

	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	t = somalloc(solib, nmemb * size);
	if (!t)
		return (NULL);
	ft_bzero(t, nmemb * size);
	return (t);
}
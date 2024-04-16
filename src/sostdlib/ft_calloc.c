/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:00:40 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 10:00:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

void	*ft_calloc(t_solibft *solibft, size_t nmemb, size_t size)
{
	(void)solibft;
	void	*t;

	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	t = (void *)malloc(nmemb * size);
	if (!t)
		return (NULL);
	ft_bzero(t, nmemb * size);
	return (t);
}
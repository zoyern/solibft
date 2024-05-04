/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 15:14:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

int		sonew_stdlib(t_solibft *solibft)
{
	if (!solibft)
		return (1);
	solibft->atoi = ft_atoi;
	solibft->calloc = ft_calloc;
	solibft->itoa = ft_itoa;
	return (0);
}

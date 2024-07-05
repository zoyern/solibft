/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 15:04:29 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

int	sonew_stdlib(t_solibft *solibft)
{
	if (!solibft)
		return (1);
	solibft->atoi = ft_atoi;
	solibft->calloc = ft_calloc;
	solibft->itoa = ft_itoa;
	//solibft->atoi_base = ft_atoi_base;
	//solibft->itoa_base = ft_itoa_base;
	//solibft->convert_base = ft_convert_base;
	return (0);
}

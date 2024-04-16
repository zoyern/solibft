/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:36 by marvin            #+#    #+#             */
/*   Updated: 2024/04/11 21:26:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

void	sostdlib_funcs(t_solibft *solibft)
{
	if (!solibft->funcs)
		return ;
	solibft->funcs->atoi = ft_atoi;
	solibft->funcs->calloc = ft_calloc;
	solibft->funcs->itoa = ft_itoa;
}

int		sonewstdlib(t_solibft *solibft)
{
	t_sostdlib	*sostdlib;

	if (!solibft)
		return (1);
	sostdlib = (t_sostdlib *)malloc(sizeof(t_sostdlib));
	sostdlib->atoi = ft_atoi;
	sostdlib->calloc = ft_calloc;
	sostdlib->itoa = ft_itoa;
	sostdlib_funcs(solibft);
	solibft->sostdlib = sostdlib;
	return (0);
}
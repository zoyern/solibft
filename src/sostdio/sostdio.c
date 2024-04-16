/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdio.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:58:53 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 11:58:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

void	sostdio_funcs(t_solibft *solibft)
{
	if (!solibft->funcs)
		return ;
	solibft->funcs->putchar = ft_putchar_fd;
	solibft->funcs->putendl = ft_putendl_fd;
	solibft->funcs->putnbr = ft_putnbr_fd;
	solibft->funcs->putstr = ft_putstr_fd;
}

int		sonewstdio(t_solibft *solibft)
{
	t_sostdio	*sostdio;

	if (!solibft)
		return (1);
	sostdio = (t_sostdio *)malloc(sizeof(t_sostdio));
	sostdio->putchar = ft_putchar_fd;
	sostdio->putendl = ft_putendl_fd;
	sostdio->putnbr = ft_putnbr_fd;
	sostdio->putstr = ft_putstr_fd;
	sostdio_funcs(solibft);
	solibft->sostdio = sostdio;
	return (0);
}
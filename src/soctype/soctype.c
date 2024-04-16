/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soctype.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:23:38 by marvin            #+#    #+#             */
/*   Updated: 2024/04/12 12:23:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

void	soctype_funcs(t_solibft *solibft)
{
	if (!solibft->funcs)
		return ;
	solibft->funcs->isalnum = ft_isalnum;
	solibft->funcs->isalpha = ft_isalpha;
	solibft->funcs->isascii = ft_isascii;
	solibft->funcs->isdigit = ft_isdigit;
	solibft->funcs->isprint = ft_isprint;
	solibft->funcs->tolower = ft_tolower;
	solibft->funcs->toupper = ft_toupper;
}

int		sonewctype(t_solibft *solibft)
{
	t_soctype	*soctype;

	if (!solibft)
		return (1);
	soctype = (t_soctype *)malloc(sizeof(t_soctype));
	soctype->isalnum = ft_isalnum;
	soctype->isalpha = ft_isalpha;
	soctype->isascii = ft_isascii;
	soctype->isdigit = ft_isdigit;
	soctype->isprint = ft_isprint;
	soctype->tolower = ft_tolower;
	soctype->toupper = ft_toupper;
	soctype_funcs(solibft);
	solibft->soctype = soctype;
	return (0);
}
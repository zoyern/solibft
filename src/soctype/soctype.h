/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soctype.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:55 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 15:08:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCTYPE_H
# define SOCTYPE_H

#include <solibft/all.h>

int		sonew_ctype(t_solibft *solibft);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:55 by marvin            #+#    #+#             */
/*   Updated: 2024/04/11 21:26:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCTYPE_H
# define SOCTYPE_H

#include <solibft/all.h>

typedef struct s_soctype
{
	int	(*isalnum)(int c);
	int	(*isalpha)(int c);
	int	(*isascii)(int c);
	int	(*isdigit)(int c);
	int	(*isprint)(int c);
	int	(*tolower)(int c);
	int	(*toupper)(int c);
}	t_soctype;

int		sonewctype(t_solibft *solibft);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
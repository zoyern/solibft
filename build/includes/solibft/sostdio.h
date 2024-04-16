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

#ifndef SOSTDIO_H
# define SOSTDIO_H

#include <solibft/all.h>

typedef struct s_sostdio
{
	void	(*putchar)(char c, int fd);
	void	(*putendl)(char *s, int fd);
	void	(*putnbr)(int n, int fd);
	void	(*putstr)(char *s, int fd);
}	t_sostdio;

int		sonewstdio(t_solibft *solibft);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
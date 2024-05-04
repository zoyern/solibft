/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sostdlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:26:55 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 17:06:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOSTDLIB_H
# define SOSTDLIB_H

#include <solibft/all.h>

int		sonew_stdlib(t_solibft *solibft);
int		ft_atoi(const char *nptr);
void	*ft_calloc(t_solib *solib, size_t nmemb, size_t size);
char	*ft_itoa(t_solib *solib, int n);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:59:49 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 15:03:39 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

long long	ft_atoi(const char *nptr)
{
	long long	i;
	long long	sign;
	long long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr && ft_isspace(nptr[i]))
		i++;
	while (nptr && (nptr[i] == '-' || nptr[i] == '+'))
		if (nptr[i++] == '-')
			sign *= -1;
	while (nptr && (nptr[i] >= '0' && nptr[i] <= '9'))
		num = (num * 10) + (nptr[i++] - '0');
	return (num * sign);
}

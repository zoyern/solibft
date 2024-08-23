/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:04:00 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 15:04:18 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>
#include <sotypes/somemory.h>

size_t	ft_nbrlen(long long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(t_solib *solib, long long n)
{
	char		*s;
	long long	count;
	long long	sign;
	long long	nb;

	nb = n;
	count = ft_nbrlen(nb);
	sign = 0;
	s = (char *)somalloc(solib, sizeof(char) * count + 1);
	if (!s)
		return (NULL);
	s[count] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		s[sign++] = '-';
	}
	while (count-- > (long long)sign)
	{
		s[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}

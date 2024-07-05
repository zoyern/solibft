/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:05:19 by marvin            #+#    #+#             */
/*   Updated: 2024/07/05 02:05:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>
#include <sotypes/soprintf.h>

char	*mal_nbr(long int nbr, int len_base, int i)
{
	char	*str;
	int		null;
	int		size;

	null = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		null += 1;
	}
	while (nbr > 0)
	{
		nbr /= len_base;
		i++;
	}
	size = i + null;
	str = (char *)malloc(sizeof(char) * (size));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_rev_numbers(char *str, int i, int size)
{
	char	current;

	while (i < (size / 2))
	{
		current = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = current;
		i++;
	}
	return (str);
}

char	*ft_stock_base(long int nbr, char *base, int len_base, int i)
{
	long int	copy_start;
	char		*duplicated;

	if (nbr == 0)
	{
		duplicated = (char *)malloc(sizeof(char) * (2));
		duplicated[0] = base[0];
		duplicated[1] = '\0';
		return (duplicated);
	}
	copy_start = nbr;
	duplicated = mal_nbr(nbr, len_base, 0);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		duplicated[i++] = base[nbr % len_base];
		nbr /= len_base;
	}
	if (copy_start < 0)
		duplicated[i++] = '-';
	duplicated[i] = '\0';
	return (ft_rev_numbers(duplicated, 0, ft_strlen(duplicated)));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;

	if (!(base_from) || !(base_to) || !(nbr))
		return (NULL);
	if (check_base(base_from) == 1 || check_base(base_to) == 1)
		return (NULL);
	int	test = ft_atoi_base(nbr, base_from);
	soprintf("test : %d \n", test);
	str = ft_stock_base(test, base_to,
			ft_strlen(base_to), 0);
	return (str);
}
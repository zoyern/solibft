/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solibft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:31:29 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 17:06:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

t_solib	*sonew_libft(t_solib *solib)
{
	t_solibft	*solibft;

	solibft = (t_solibft *)malloc(sizeof(t_solibft));
	if (!solibft)
		return (NULL);
	sonew_ctype(solibft);
	sonew_stdio(solibft);
	sonew_stdlib(solibft);
	sonew_sostring(solibft);
	if (!solib)
		solib = sonew_types(0, NULL, NULL);
	solib->libft = solibft;
	return (solib);
}

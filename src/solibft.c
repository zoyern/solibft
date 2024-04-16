/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solibft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:31:29 by marvin            #+#    #+#             */
/*   Updated: 2024/04/11 21:31:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <solibft/all.h>

int	solibft_close(t_solibft *solibft, int state)
{
	if (!solibft)
		return (state);
	free(solibft);
	return (state);
}

t_solibft	*sonewlibft(void)
{
	t_solibft	*solibft;

	/*initialisation*/
	solibft = (t_solibft *)malloc(sizeof(t_solibft));
	if (!solibft)
		return (NULL);
	/*memory*/
	/*function*/
	solibft->close = solibft_close;
	solibft->malloc = NULL;
	solibft->free = NULL;
	solibft->funcs = (t_solibft_funcs *)malloc(sizeof(t_solibft_funcs));
	if (!solibft->funcs)
		return (free(solibft), NULL);
	/*Core*/
	sonewctype(solibft);
	sonewstdio(solibft);
	sonewstdlib(solibft);
	sonewstring(solibft);
	return (solibft);
}
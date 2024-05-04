/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:14 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 18:42:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exemple.h"

int main(int argc, char **argv, char **envp)
{
	t_solib		*solib;
	int			state;

	solib = sonew_libft(sonew_types(argc, argv, envp));
	if (solib->libft)
	{
		solib->print("╔══❖═══════❖══╗\n");
		solib->print("║   SOLIBFT   ║\n");
		solib->print("║             ║\n");
		solib->print("║ loading :✅ ║\n");
		solib->print("╚══❖═══════❖══╝\n");
		state = EXIT_SUCCESS;
	}
	else
	{
		solib->print("╔══❖═══════❖══╗\n");
		solib->print("║   SOLIBFT   ║\n");
		solib->print("║             ║\n");
		solib->print("║ loading :⭕️ ║\n");
		solib->print("╚══❖═══════❖══╝\n");
		state = EXIT_FAILURE;
	}
	return (solib->close(solib, state));
}


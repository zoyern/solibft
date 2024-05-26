/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:14 by marvin            #+#    #+#             */
/*   Updated: 2024/05/16 14:35:26 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exemple.h"

int	main(int argc, char **argv, char **envp)
{
	t_solib		*solib;

	solib = sonew_libft(sonew_types(argc, argv, envp));
	if (!solib)
		return (solib->close(solib, EXIT_FAILURE));
	solib->print("╔══❖═══════❖══╗\n");
	solib->print("║   SOLIBFT   ║\n");
	solib->print("║             ║\n");
	solib->print("║ loading :✅ ║\n");
	solib->print("╚══❖═══════❖══╝\n");
	return (solib->close(solib, EXIT_SUCCESS));
}

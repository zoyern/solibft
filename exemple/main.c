/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:14 by marvin            #+#    #+#             */
/*   Updated: 2024/05/02 16:06:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exemple.h"

int main(int argc, char **argv, char **envp)
{
	t_solibft	*solibft;
	int			state;

	solibft = sonewlibft(sonew_types(argc, argv, envp));
	if (solibft)
	{
		printf("╔══❖═══════❖══╗\n");
		printf("║   SOLIBFT   ║\n");
		printf("║             ║\n");
		printf("║ loading :✅ ║\n");
		printf("╚══❖═══════❖══╝\n");
		state = EXIT_SUCCESS;
	}
	else
	{
		printf("╔══❖═══════❖══╗\n");
		printf("║   SOLIBFT   ║\n");
		printf("║             ║\n");
		printf("║ loading :⭕️ ║\n");
		printf("╚══❖═══════❖══╝\n");
		state = EXIT_FAILURE;
	}
	return (solibft->close(solibft, state));
}


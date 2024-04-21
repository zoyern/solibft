/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:14 by marvin            #+#    #+#             */
/*   Updated: 2024/04/19 17:50:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exemple.h"

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;
	t_solibft	*solibft;
	int			state;

	solibft = sonewlibft();
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


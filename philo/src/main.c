/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:36:51 by karabaci          #+#    #+#             */
/*   Updated: 2023/01/26 19:36:53 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (check_args(argc, argv) == ERROR)
		philo_error("\"CHECK_ARGS(ARGC, ARGV)\" RETURNED_ERROR", ARGS_ERROR);
	else
	{
		start_philo(argc, argv, &data);
		end_philo(&data);
		return (0);
	}
	return (-1);
}

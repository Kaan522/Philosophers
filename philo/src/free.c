/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:36:40 by karabaci          #+#    #+#             */
/*   Updated: 2023/01/26 19:36:42 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	end_philo(t_data *data)
{
	int	i;

	i = -1;
	pthread_mutex_destroy(&data->write);
	while (++i < data->n_philos)
		pthread_mutex_destroy(&data->fork[i]);
	free(data->fork);
	free(data->philo);
}

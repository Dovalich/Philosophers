/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nammari <nammari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:04:34 by nammari           #+#    #+#             */
/*   Updated: 2021/12/20 12:35:36 by nammari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_usleep(int sleep_time)
{
	int	i;

	i = 0;
	while (i < sleep_time)
	{
		usleep(1);
		++i;
	}
}

// while current_time != the time I want -> ft_usleep (~ 1 micro);
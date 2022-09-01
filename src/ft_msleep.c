/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <mraymond@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:15:50 by mraymond          #+#    #+#             */
/*   Updated: 2022/09/01 10:16:14 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static long unsigned int	now_millisecond(void)
{
	struct timeval	now;

	gettimeofday(&now, NULL);
	return (now.tv_sec * 1000 + now.tv_usec / 1000);
}

void	ft_msleep(long unsigned int wait_millisecond)
{
	long unsigned int	start;
	long unsigned int	how_long;

	start = now_millisecond();
	while (now_millisecond() < wait_millisecond + start)
		usleep(50);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_trgb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <mraymond@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:44:19 by mraymond          #+#    #+#             */
/*   Updated: 2022/07/13 13:44:30 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
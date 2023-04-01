/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:28:10 by tumolabs          #+#    #+#             */
/*   Updated: 2023/03/27 23:36:23 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	_round(double d)
{
	double	r;

	r = (int)(d * 100 + .5);
	return ((double)r / 100);
}

double	to_degree(double radian)
{
	return ((double)radian * 180 / M_PI);
}

double	to_radian(double degree)
{
	return ((double)degree / 180 * M_PI);
}
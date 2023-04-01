/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:16:03 by tumolabs          #+#    #+#             */
/*   Updated: 2023/03/28 00:09:38 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	dot(t_vec3 *v1, t_vec3 *v2)
{
	double	scalyar;

	scalyar = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
	return (scalyar);
}

double	vec3_len(t_vec3 *v1)
{
	double	len;
	
	len = sqrt(pow(v1->x, 2) + pow(v1->y, 2) + pow(v1->z, 2));
	return (len);
}

t_vec3	*vec3_norm(t_vec3 *v)
{
	t_vec3	*norm;
	double	inv;

	inv = 1 / vec3_len(v);
	norm = ft_calloc(3, sizeof(t_vec3));
	norm->x = inv * v->x;
	norm->y = inv * v->y;
	norm->z = inv * v->z;
	return (norm);	
}

t_vec3	*vec3_sum(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3	*sum;

	sum = ft_calloc(3, sizeof(t_vec3));
	sum->x = v1->x + v2->x;
	sum->y = v1->y + v2->y;
	sum->z = v1->z + v2->z;
	return (sum);
}

t_vec3	*vec3_div(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3	*div;

	div = ft_calloc(3, sizeof(t_vec3));
	div->x = v1->x - v2->x;
	div->y = v1->y - v2->y;
	div->z = v1->z - v2->z;
	return (div);
}

t_vec3	*cross(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3	*cross;

	cross = ft_calloc(3, sizeof(t_vec3));
	cross->x = (v1->y * v2->z) - (v1->z * v2->y);
	cross->y = (v1->z * v2->x) - (v1->x * v2->z);
	cross->z = (v1->x * v2->y) - (v1->y * v2->x);
	return (cross);
}
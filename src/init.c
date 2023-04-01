/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:52:45 by tumolabs          #+#    #+#             */
/*   Updated: 2023/04/02 00:27:38 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void    init_structures(t_scene **scene, t_camera **camera, t_table **table)
{
    scene = malloc(sizeof(t_scene));
    camera = malloc(sizeof(t_camera));
    (*table) = malloc(sizeof(t_table));
    (*table)->aspect_ratio = 0.0;
    (*table)->w = 0.0;
    (*table)->h = 0.0;
    (*table)->tokens = ft_split(OBJS, '|');
    (*table)->access[0] = &resolution;
    (*table)->access[1] = ambient;
    (*table)->access[2] = cam;
    (*table)->access[3] = light;
    (*table)->access[4] = spheres;
    (*table)->access[5] = cylinders;
    (*table)->access[6] = planes;
}

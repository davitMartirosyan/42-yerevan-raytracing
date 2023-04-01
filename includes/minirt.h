/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:08:27 by tumolabs          #+#    #+#             */
/*   Updated: 2023/04/02 00:29:36 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../libft/libft.h"
#include "../gnl/get_next_line.h"
#include "mathlib.h"
#include "struct.h"
#define EPSILION 1.0e-6
#define OBJS "r |a |c |l |sp|cy|pl"

t_vec3	*vec3_norm(t_vec3 *v);
t_vec3	*vec3_sum(t_vec3 *v1, t_vec3 *v2);
t_vec3	*cross(t_vec3 *v1, t_vec3 *v2);
double	dot(t_vec3 *v1, t_vec3 *v2);
double	vec3_len(t_vec3 *v1);
int     setup_scene(t_scene *scene, t_camera *camera, t_table *table);
void    init_structures(t_scene **scene, t_camera **camera, t_table **table);
int     unity3d(char *line, t_scene *scene, t_camera *camera, t_table *table);
int     inparse(char *file, t_scene *scene, t_camera *camera, t_table *table);




/* parsing access */
void    resolution(char *line);
void    ambient(char *line);
void    cam(char *line);
void    light(char *line);
void    spheres(char *line);
void    cylinders(char *line);
void    planes(char *line);
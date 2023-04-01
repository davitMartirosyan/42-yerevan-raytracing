/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:08:27 by tumolabs          #+#    #+#             */
/*   Updated: 2023/03/28 00:07:52 by tumolabs         ###   ########.fr       */
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

t_v3	*vec3_norm(t_v3 *v);
t_v3	*vec3_sum(t_v3 *v1, t_v3 *v2);
t_v3	*cross(t_v3 *v1, t_v3 *v2);
double	dot(t_v3 *v1, t_v3 *v2);
double	vec3_len(t_v3 *v1);
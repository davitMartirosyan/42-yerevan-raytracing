/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:09:29 by tumolabs          #+#    #+#             */
/*   Updated: 2023/03/27 20:15:27 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_v3
{
	double	x;
	double	y;
	double	z;
}	t_v3;

typedef struct s_rgb
{
	int	r;
	int	g;
	int	b;
}	t_rgb;

typedef struct s_cam
{
	t_v3	*pos;
	t_v3	*norm;
	double	hfov;
}	t_cam;

typedef struct s_light
{
	t_v3	*pos;
	t_rgb	*rgb;
	double	brightness;
	double	color;
}	t_light;

typedef struct s_sp
{
	t_v3	*c;
	t_rgb	*rgb;
	double	color;
	double	r;
}	t_sp;


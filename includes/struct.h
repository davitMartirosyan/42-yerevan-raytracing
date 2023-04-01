/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:09:29 by tumolabs          #+#    #+#             */
/*   Updated: 2023/04/02 00:24:16 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef void	(*t_access)(char *line);

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}	t_vec3;

typedef struct s_rgb
{
	int	r;
	int	g;
	int	b;
}	t_rgb;

typedef struct s_camera
{
	t_vec3	*pos;
	t_vec3	*norm;
	double	hfov;
}	t_camera;

/* Objects  (Light sources, Spheres, Cylinders, Plane)*/

typedef struct s_l
{
	t_vec3	*pos;
	t_rgb	*rgb;
	double	brightness;
	double	color;
}	t_l;

typedef struct s_sp
{
	t_vec3	*c;
	t_rgb	*rgb;
	double	color;
	double	r;
}	t_sp;

typedef struct s_cy
{
	t_vec3	*pos;
	t_vec3	*norm;
	t_rgb	*rgb;
	double	diameter;
	double	height;
	double	color;
}	t_cy;

typedef struct s_pl
{
	t_vec3	*pos;
	t_vec3	*norm;
	t_rgb	*rgb;
	double	color;
}	t_pl;

typedef struct s_scene
{
	t_sp	*sp;
	t_cy	*cy;
	t_pl	*pl;
	t_l		*l;
}	t_scene;

typedef struct s_table
{
	char		**tokens;
	t_access	access[7];
	double	aspect_ratio;
	double	w;
	double	h;
}	t_table;
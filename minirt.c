/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:08:14 by tumolabs          #+#    #+#             */
/*   Updated: 2023/04/02 00:26:24 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int main(int ac, char **av)
{
	t_scene		*scene;
	t_camera	*camera;
	t_table		*table;
	
	if (ac != 4)
	{
		printf("Arguments Error\n");
		return (1);
	}
	init_structures(&scene, &camera, &table);
	if (inparse(av[1], scene, camera, table) >= 0)
	{
		// if (setup_scene(scene, camera, table))
		// 	render();
	}
	else
	{
		printf("Something Went Wrong!\n");
		return (2);
	}
	return (0);
}



// gcc -I includes/ *.c */*.c  -lmlx -framework OpenGL -framework AppKit -o rt
// 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
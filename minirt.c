/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:08:14 by tumolabs          #+#    #+#             */
/*   Updated: 2023/03/28 00:26:13 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int main(int ac, char **av, char **envp)
{
	t_v3	*a, *a1, b, c;

	b.x = 0;
	b.y = 1;
	b.z = 0;
	
	c.x = 1;
	c.y = 0;
	c.z = 2;
	
	a = cross(&b, &c);
	printf("{%f} : {%f} : {%f}\n", a->x, a->y, a->z);
}


// gcc -I includes/ *.c */*.c  -lmlx -framework OpenGL -framework AppKit -o rt
// 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
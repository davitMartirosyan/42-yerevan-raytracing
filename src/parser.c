/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <tumolabs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:34:20 by tumolabs          #+#    #+#             */
/*   Updated: 2023/04/02 00:32:36 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int inparse(char *file, t_scene *scene, t_camera *camera, t_table *table)
{
    int     fd;
    char    *line;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (-1);
    line = get_next_line(fd);
    while (line != NULL)
    {
        if (unity3d(line, scene, camera, table) < 0)
        {
            free(line);
            return (-2);
        }
        free(line);
        line = get_next_line(fd);   
    }
    return (1);
}

int unity3d(char *line, t_scene *scene, t_camera *camera, t_table *table)
{
    int i;

    i = 0;
    while (line[i])
    {
        if (ft_isalpha(line[i]))
    }
    return (1);
}
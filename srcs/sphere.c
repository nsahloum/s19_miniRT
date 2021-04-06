/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 03:50:37 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

void ft_sphere(t_mlx mlx)
{
    int		count_w;
	int		count_h;
	int		count_z;
	int		radius;
    radius = 200;
    count_h = -1;
    while (++count_h < (int)g_amb.res_x)
    {
        count_w = -1;
        while (++count_w < (int)g_amb.res_y)
        {
            count_z = -1;
            while(++count_z < radius * 2)
            {
				if (ft_square(count_w - ((int)g_amb.res_x / 2)) + ft_square(count_h - (int)g_amb.res_y/2) + 
				ft_square(count_z - (30)) <= ft_square(radius)) 
				{
					mlx.img.data[count_h * (int)g_amb.res_x + count_w] = 0xFFFFFF;
				}
            }
        }
    }
}
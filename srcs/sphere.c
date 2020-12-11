/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/11 00:55:36 by nsahloum         ###   ########.fr       */
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
    while (++count_h < WIN_HEIGHT)
    {
        count_w = -1;
        while (++count_w < WIN_WIDTH)
        {
            count_z = -1;
            while(++count_z < radius * 2)
            {
				if (ft_square(count_w - (WIN_WIDTH / 2)) + ft_square(count_h - WIN_HEIGHT/2) + 
				ft_square(count_z - (30)) <= ft_square(radius)) 
				{
					mlx.img.data[count_h * WIN_WIDTH + count_w] = 0xFFFFFF;
				}
            }
        }
    }
}
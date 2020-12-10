/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/10 19:06:14 by nsahloum         ###   ########.fr       */
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
            //if (count_w > WIN_WIDTH / 3 && count_w < (2 * WIN_WIDTH / 3) && count_h > WIN_WIDTH / 3 && count_h < (2 * WIN_WIDTH / 3))
            //{
            //	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0xFFFFFF;
            //}
            if (ft_square(count_w - (WIN_WIDTH / 2)) + ft_square(count_h - WIN_HEIGHT/2) + 
            ft_square(count_z - (30)) <= ft_square(radius)) 
            {
                mlx.img.data[count_h * WIN_WIDTH + count_w] = ((ft_square(count_w - (WIN_WIDTH / 2)) + 
                ft_square(count_h - WIN_HEIGHT/2) + ft_square(count_z - (30))) % 2) ? 0xFFFFFF : 0xADD8E6;
            }
            //if (count_w == WIN_WIDTH / 2)
            //	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0xFFFFFF;
            //else
            //	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0;
            }
        }
    }
}
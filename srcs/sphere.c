/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/08 01:15:53 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

void ft_sphere(t_mlx mlx)
{
    int		count_w;
	int		count_h;
	int		count_z;
	int		radius;
	
	count_h = -1;
	radius = 200;

	while (++count_h < g_amb.res_y)
	{
		count_w = -1;
		while (++count_w < g_amb.res_x)
		{
			count_z = -1;
			while(++count_z < radius * 2)
			{
			//if (count_w > WIN_WIDTH / 3 && count_w < (2 * WIN_WIDTH / 3) && count_h > WIN_WIDTH / 3 && count_h < (2 * WIN_WIDTH / 3))
			//{
			//	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0xFFFFFF;
			//}
			if (ft_square(count_w - (g_amb.res_x / 2)) + ft_square(count_h - g_amb.res_y/2) + 
			ft_square(count_z - (30)) <= ft_square(radius)) 
			{
				mlx.img.data[count_h * (int)g_amb.res_x + count_w] = ((ft_square(count_w - (g_amb.res_x / 2)) + 
				ft_square(count_h - g_amb.res_y/2) + ft_square(count_z - (30))) % 2) ? 0xFFFFFF : 0xADD8E6;
			}
			//if (count_w == WIN_WIDTH / 2)
			//	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0xFFFFFF;
			//else
			//	mlx.img.data[count_h * WIN_WIDTH + count_w] = 0;
			}
		}
	}
}
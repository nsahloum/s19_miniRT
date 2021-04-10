/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/11 00:15:59 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

void ft_sphere(void)
{
    int		count_w;
	int		count_h;
	int		count_z;
	
	count_h = -1;

	while (++count_h < g_amb.res_y)
	{
		count_w = -1;
		while (++count_w < g_amb.res_x)
		{
			count_z = -1;
			while(++count_z < g_sphere.diam)
			{
				if (ft_square(count_w - (g_amb.res_x / 2)) + ft_square(count_h - g_amb.res_y/2) + 
				ft_square(count_z - (30)) <= ft_square(g_sphere.diam/2)) 
				{
					g_mlx.img.data[count_h * (int)g_amb.res_x + count_w] = ((ft_square(count_w - (g_amb.res_x / 2)) + 
					ft_square(count_h - g_amb.res_y/2) + ft_square(count_z - (30))) % 2) ? 0xFFFFFF : 0xADD8E6;
				}
			}
		}
	}
}
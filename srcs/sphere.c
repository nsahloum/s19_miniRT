/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:03:05 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 18:39:38 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

void ft_sphere(void)
{
    int		count_w;
	int		count_h;
	//int		count_z;
	
	count_h = -1;

	while (++count_h < g_amb.res_y)
	{
		count_w = -1;
		while (++count_w < g_amb.res_x)
		{
				if (ft_square(count_w - ft_coord_x(g_sphere.s_x)) + ft_square(count_h - ft_coord_y(g_sphere.s_y)) <= ft_square(g_sphere.diam/2)) 
				{
					g_mlx.img.data[count_h * g_amb.res_x + count_w] = 0xFFFFFF;
				}
		}
	}
}
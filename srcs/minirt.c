/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/10/31 20:46:50 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "minirt.h"

int main(void)
{
	t_mlx	mlx;
	int		count_w;
	int		count_h;
	int		count_z;
	int		radius;
	
	count_h = -1;
	mlx.mlx_ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "najima_window");
	mlx.img.img_ptr = mlx_new_image(mlx.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	mlx.img.data = (int *)mlx_get_data_addr(mlx.img.img_ptr, &mlx.img.bpp, &mlx.img.size_l, &mlx.img.endian);
	radius = 200;

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
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win, mlx.img.img_ptr, 0, 0);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
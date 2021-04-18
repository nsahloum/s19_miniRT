/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:05 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 18:24:24 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include <stdio.h>
#include <stdlib.h>

int ft_good_fnt(char *line)
{
	if (line[0] == 'R')
	 	ft_resolution(line);
	if (line[0] == 'c')
		ft_parse_camera(line);
	if (line[0] == 's' && line[1] == 'p')
	 	ft_parse_sphere(line);
	return(0);
}

void ft_read(int argc, char **argv)
{
	int fd;
	char *line;
	int ret;
	fd = open(argv[1], O_RDONLY);
	argc = 2;
	while (((ret = get_next_line(fd, &line)) > 0))
	{
		ft_good_fnt(line);
		free(line);
	}
	ft_good_fnt(line);
	free(line);
	close(fd);
}

void ft_make_scene(void)
{
	if (g_sphere_active == 1)
		ft_sphere();
}

void ft_reset(void)
{
	g_sphere_active = 0;
}

int main(int argc, char **argv)
{
	ft_reset();
	g_mlx.mlx_ptr = mlx_init();
	ft_read(argc, argv);
	g_mlx.win = mlx_new_window(g_mlx.mlx_ptr, g_amb.res_x, g_amb.res_y, "nsahloum_window");
	g_mlx.img.img_ptr = mlx_new_image(g_mlx.mlx_ptr, g_amb.res_x, g_amb.res_y);
	g_mlx.img.data = (int *)mlx_get_data_addr(g_mlx.img.img_ptr, &g_mlx.img.bpp, 
	&g_mlx.img.size_l, &g_mlx.img.endian);
	ft_make_scene();
	mlx_put_image_to_window(g_mlx.mlx_ptr, g_mlx.win, g_mlx.img.img_ptr, 0, 0);
	mlx_loop(g_mlx.mlx_ptr);
	return (0);
}
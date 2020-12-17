/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/11 19:16:15 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

int ft_treat_line(char *line)
{
	if (line[0] == 'R')
	{
		ft_sphere(g_mlx);
		return (1);
	}
	return (0);
}

void ft_read(int argc, char **argv)
{
	int fd;
	char *line;
	int ret;
	
	fd = open(argv[1], O_RDONLY);
	argc = 2;
	while (((ret = get_next_line(fd, &line)) > 0) && (ft_treat_line(line) == 0))
	{
		ft_treat_line(line);
		free(line);
	}
	ft_treat_line(line);
	free(line);
	close(fd);
	
}

int main(int argc, char **argv)
{
	
	g_mlx.mlx_ptr = mlx_init();
	g_mlx.win = mlx_new_window(g_mlx.mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "najima_window");
	g_mlx.img.img_ptr = mlx_new_image(g_mlx.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	g_mlx.img.data = (int *)mlx_get_data_addr(g_mlx.img.img_ptr, &g_mlx.img.bpp, &g_mlx.img.size_l, &g_mlx.img.endian);
	ft_read(argc, argv);
	mlx_put_image_to_window(g_mlx.mlx_ptr, g_mlx.win, g_mlx.img.img_ptr, 0, 0);
	mlx_loop(g_mlx.mlx_ptr);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:05 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/06 02:15:21 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include <stdio.h>
#include <stdlib.h>

int ft_good_fnt(char *line)
{
	printf("%s", line);
	return(0);
}

void ft_read(int argc, char **argv)
{
	int fd;
	char *line;
	int ret;
	
	fd = open(argv[1], O_RDONLY);
	argc = 2;
	while (((ret = get_next_line(fd, &line)) > 0) && (ft_good_fnt(line) != -1))
	{
		g_tab_func[0](line);
		free(line);
	}
	g_tab_func[0](line);
	free(line);
	close(fd);
}

int main(int argc, char **argv)
{
	g_mlx.mlx_ptr = mlx_init();
	ft_read(argc, argv);
	g_mlx.win = mlx_new_window(g_mlx.mlx_ptr, (int)g_amb.res_x, (int)g_amb.res_y, "najima_window");
	g_mlx.img.img_ptr = mlx_new_image(g_mlx.mlx_ptr, (int)g_amb.res_x, (int)g_amb.res_y);
	g_mlx.img.data = (int *)mlx_get_data_addr(g_mlx.img.img_ptr, &g_mlx.img.bpp, &g_mlx.img.size_l, &g_mlx.img.endian);
	mlx_put_image_to_window(g_mlx.mlx_ptr, g_mlx.win, g_mlx.img.img_ptr, 0, 0);
	mlx_loop(g_mlx.mlx_ptr);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:05 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 02:24:17 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include <stdio.h>
#include <stdlib.h>

int ft_good_fnt(char *line)
{
	static char	tab_id[4] = {'R', 'A', 'c', 0};
	int i;
	char c;

	c = line[0];
	i = -1;
	while (tab_id[++i])
	{
		if (tab_id[i] == c)
			return(i);
	} 	
	return (-1);
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
		g_tab_func[ft_good_fnt(line)](line);
		free(line);
	}
	g_tab_func[ft_good_fnt(line)](line);
	free(line);
	close(fd);
}

// void ft_write(int num)
// {
// 	FILE * fd;
// 	fd = fopen("rep.txt","w");
// 	fprintf(fd, "%d", num);
//    	fclose(fd);
// }

void ft_write(int num,...)
{
	FILE * fd;
	fd = fopen("rep.txt","w");
	va_list	argp;
	va_start(argp, num);
	while (num > 0)
	{
		fprintf(fd, "%d\n", va_arg(argp, int));
		num--;
	}
	va_end(argp);
   	fclose(fd);
}

int main(void)
{
	g_mlx.mlx_ptr = mlx_init();
	ft_read(argc, argv);
	g_mlx.win = mlx_new_window(g_mlx.mlx_ptr, g_amb.res_x, g_amb.res_y, "najima_window");
	g_mlx.img.img_ptr = mlx_new_image(g_mlx.mlx_ptr, g_amb.res_x, g_amb.res_y);
	g_mlx.img.data = (int *)mlx_get_data_addr(g_mlx.img.img_ptr, &g_mlx.img.bpp, &g_mlx.img.size_l, &g_mlx.img.endian);
	mlx_put_image_to_window(g_mlx.mlx_ptr, g_mlx.win, g_mlx.img.img_ptr, 0, 0);
	mlx_loop(g_mlx.mlx_ptr);
	return (0);
}
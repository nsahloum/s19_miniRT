/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:45 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 03:47:04 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

#include <math.h>
#include "get_next_line.h"
//#include "../minilibx_mms/mlx.h"
#include "../lib/minilibx_opengl/mlx.h"
#include "../lib/libft/libft.h"
//#include "minilibx-linux/mlx_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct	s_img
{
    void        *img_ptr;
    int         *data;
    int         size_l;
    int         bpp;
    int         endian;
}				t_img;

typedef struct	s_mlx
{
	void		*mlx_ptr;
	void		*win;
	t_img		img;
}				t_mlx;

t_mlx g_mlx;

typedef struct s_ambiance
{
    double res_x;
    double res_y;
	double	ambli_ratio;
	double ambli_r;
	double ambli_g;
	double ambli_b;
}   t_ambiance;

t_ambiance g_amb;

typedef struct s_camera
{
    double vue_x;
	double vue_y;
	double vue_z;
	double vec_x;
	double vec_y;
	double vec_z;
	double fov;
	struct s_camera *next;
}   t_camera;

int ft_square(int x);
void ft_sphere(t_mlx mlx);
void ft_resolution(char *resolution);
void ft_ambli(char *ambli);
void ft_camera(char *cam);
void ft_write(int num,...);
int	ft_skip_digit(char *chaine);
int	ft_skip_letter(char *chaine);

static void (*g_tab_func[3]) (char *) = {&ft_resolution, &ft_ambli, &ft_camera};
#endif

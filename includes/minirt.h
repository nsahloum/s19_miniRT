/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:45 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/08 01:57:25 by nsahloum         ###   ########.fr       */
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

# define WIN_WIDTH 800
# define WIN_HEIGHT 600

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
}			t_ambiance;

t_ambiance g_amb;

typedef struct s_sphere
{
	double diam;
	int color_r;
	int color_g;
	int color_b;
}		t_sphere;

t_sphere g_sphere;

int ft_square(int x);
void ft_sphere(t_mlx mlx);
void ft_resolution(char *resolution);
int	ft_skip_digit(char *chaine);
int	ft_skip_letter(char *chaine);
void ft_parse_sphere(char *sphere);

int g_sphere_active;

#endif

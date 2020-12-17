/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:35:45 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/11 19:35:01 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

#include <math.h>
#include "get_next_line.h"
//#include "../minilibx_mms/mlx.h"
#include "../lib/minilibx_opengl/mlx.h"
//#include "minilibx-linux/mlx_int.h"


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

int ft_square(int x);
void ft_sphere(t_mlx mlx);
#endif
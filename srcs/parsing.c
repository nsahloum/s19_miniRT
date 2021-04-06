/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:19:34 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/06 02:15:41 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "stdio.h"

void ft_resolution(char *resolution)
{
	int i;
	i = 1;
    g_amb.res_x = ft_atof(&resolution[i]);
	i = i + 1 + ft_skip_digit(&resolution[i]);
	g_amb.res_y = ft_atof(&resolution[i]);
	
}

void ft_ambli(char *ambli)
{
	int i;
	
	i = ft_skip_letter(ambli);
    g_amb.ambli_ratio = ft_atof(&ambli[i]);
	i = i + ft_skip_digit(&ambli[i]);
	g_amb.ambli_r = ft_atof(&ambli[i]);
	i = i + ft_skip_digit(&ambli[i]);
	g_amb.ambli_g = ft_atof(&ambli[i]);
	i = i + ft_skip_digit(&ambli[i]);
	g_amb.ambli_b = ft_atof(&ambli[i]);
	
	
}

void ft_camera(char *cam)
{
	int i;
	t_camera	camera;

	i = ft_skip_letter(cam);
    camera.vue_x = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vue_y = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vue_z = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vue_z = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vec_x = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vec_y = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.vec_z = ft_atoi(&cam[i]);
	i = i + ft_skip_digit(&cam[i]);
	camera.fov = ft_atoi(&cam[i]);
}
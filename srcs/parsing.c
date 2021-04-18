/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:19:34 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 16:49:20 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "stdio.h"

void ft_resolution(char *resolution)
{
	int i;
	i = 0;
	while (ft_isalpha(resolution[i]))
		i++;
    g_amb.res_x = ft_atof(&resolution[i]);
	i = i + ft_skip_digit(&resolution[i]);
	g_amb.res_y = ft_atof(&resolution[i]);
	
}

void ft_parse_sphere(char *sphere)
{
	int i;
	i = 0;
	while(ft_isalpha(sphere[i]))
		i++;
	g_sphere.s_x = ft_atof(&sphere[i]);
	i = i + ft_skip_space(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]) + 1;
	g_sphere.s_y = ft_atof(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]) + 1;
	g_sphere.s_z = ft_atof(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]);
	i = i + ft_skip_space(&sphere[i]);
	g_sphere.diam = ft_atof(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]);
	g_sphere.color_r = ft_atof(&sphere[i]);
	i = i + ft_skip_space(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]) + 1;
	g_sphere.color_g = ft_atof(&sphere[i]);
	i = i + ft_skip_digit(&sphere[i]) + 1;
	g_sphere.color_b = ft_atof(&sphere[i]);
}

void ft_parse_camera(char *camera)
{
	int i;
	i = 0;
	while(ft_isalpha(camera[i]))
		i++;
	g_camera.x = ft_atof(&camera[i]);
	i = i + ft_skip_space(&camera[i]);
	i = i + ft_skip_digit(&camera[i]) + 1;
	g_camera.y = ft_atof(&camera[i]);
	i = i + ft_skip_digit(&camera[i]) + 1;
	g_camera.z = ft_atof(&camera[i]);
	i = i + ft_skip_digit(&camera[i]);
	i = i + ft_skip_space(&camera[i]);
	g_camera.norm_x = ft_atof(&camera[i]);
	i = i + ft_skip_digit(&camera[i]) + 1;
	g_camera.norm_y = ft_atof(&camera[i]);
	i = i + ft_skip_digit(&camera[i]) + 1;
	g_camera.norm_z = ft_atof(&camera[i]);
	i = i + ft_skip_digit(&camera[i]);
	g_camera.fov = ft_atof(&camera[i]);
}
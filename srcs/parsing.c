/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:19:34 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/11 00:12:02 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "stdio.h"

void ft_resolution(char *resolution)
{
	int i;
	i = 1;
    g_amb.res_x = ft_atof(&resolution[i]);
	i = i + ft_skip_digit(&resolution[i]);
	g_amb.res_y = ft_atof(&resolution[i]);
	
}

void ft_parse_sphere(char *sphere)
{
	int i;
	g_sphere_active = 1;
	i = 2;
    g_sphere.diam = ft_atof(&sphere[i]);
	i = i + 1 + ft_skip_digit(&sphere[i]);
	g_sphere.color_r = ft_atoi(&sphere[i]);
}
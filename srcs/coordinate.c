/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:34:36 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 19:18:59 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

double ft_coord_x(double x)
{
	return((x + g_amb.res_x/2 - g_camera.x));
}

double ft_coord_y(double y)
{
	return(y + g_amb.res_y/2 - g_camera.y);
}

double ft_distance_cam(double x, double y, double z)
{
	
}
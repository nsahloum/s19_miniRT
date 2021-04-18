/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:34:36 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 18:39:58 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

int ft_coord_x(double x)
{
	return(x + g_amb.res_x/2);
}

int ft_coord_y(double y)
{
	return(y + g_amb.res_y/2);
}
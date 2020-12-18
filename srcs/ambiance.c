/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambiance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:19:34 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/18 02:29:32 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "stdio.h"

void ft_resolution(char *resolution)
{
	int i;

	i = 0;
	while (ft_isdigit(resolution[i]) == 0)
		i++;
    g_amb.res_x = ft_atoi(&resolution[i]);
	while (ft_isdigit(resolution[i]))
		i++;
	g_amb.res_y = ft_atoi(&resolution[i]);
}
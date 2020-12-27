/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambiance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:19:34 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/23 22:13:59 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "stdio.h"

void ft_resolution(char *resolution)
{
	int i;

	i = 0;
	i = ft_skip_letter(resolution);
    g_amb.res_x = ft_atoi(&resolution[i]);
	i = ft_skip_digit(resolution);
	g_amb.res_y = ft_atoi(&resolution[i]);
}

void ft_ambli(char *ambli)
{
	int i;

	i = ft_skip_letter(ambli);
    g_amb.ambli_ratio = ft_atoi(&ambli[i]);
	i = ft_skip_digit(ambli);
	g_amb.ambli_r = ft_atoi(&ambli[i]);
	i = ft_skip_digit(ambli);
	g_amb.ambli_g = ft_atoi(&ambli[i]);
	i = ft_skip_digit(ambli);
	g_amb.ambli_b = ft_atoi(&ambli[i]);
}
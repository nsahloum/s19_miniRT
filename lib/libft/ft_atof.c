/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:12:38 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 02:52:10 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

double ft_atof(const char *str)
{
	double n;
	int neg;
	int i;
	double e;

	e = 0.1;
	n = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		n = (n * 10) + str[i] - 48;
		i++;
	}
	if (str[i] == '.')
		i++;
	while (ft_isdigit(str[i]))
	{
		n = n + ((str[i] - 48) * e);
		e = e * 0.1;
		i++;
	}
	return (n);
}

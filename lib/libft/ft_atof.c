/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:12:38 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 03:47:09 by nsahloum         ###   ########.fr       */
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
	neg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
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
	return ((neg) ? -n : n);
}

// int main(void)
// {
// 	printf("%f", ft_atof("900 200"));
// }
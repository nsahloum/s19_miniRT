/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:43:46 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/18 17:22:43 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	ft_square(int x)
{
    return(x * x);
}

int	ft_skip_digit(char *chaine)
{
	int i;

	i = 0;
	while(ft_isdigit(chaine[i]) || chaine[i] == '.' || chaine[i] == '-')
		i++;
	return (i);
}

int ft_skip_letter(char *chaine)
{
	int i;

	i = 0;
	while(ft_isalpha(chaine[i]))
		i++;
	return (i);
}

int ft_skip_space(char *str)
{
	int i;

	i = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return(i);
}

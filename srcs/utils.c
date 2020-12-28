/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:43:46 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/28 00:02:42 by nsahloum         ###   ########.fr       */
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
	while(ft_isdigit(chaine[i]) || chaine[i] == ',' || chaine[i] == '.')
		i++;
	return (i);
}

int ft_skip_letter(char *chaine)
{
		int i;

	i = 0;
	while(ft_isdigit(chaine[i]) == 0)
		i++;
	return (i);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:43:46 by nsahloum          #+#    #+#             */
/*   Updated: 2021/04/08 02:07:02 by nsahloum         ###   ########.fr       */
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
	while(ft_isdigit(chaine[i]) || chaine[i] == '.')
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
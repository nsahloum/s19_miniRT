/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:43:46 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/23 22:11:38 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_square(int x)
{
    return(x * x);
}

int	ft_skip_digit(char *chaine)
{
	int i;

	i = 0;
	while(ft_isdigit(chaine[i]))
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
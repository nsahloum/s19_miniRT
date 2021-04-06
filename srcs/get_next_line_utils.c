/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:50:40 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/18 02:14:56 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int		ft_strchrn(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strleng(const char *s)
{
	size_t i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdupg(const char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	if (!(dest = malloc((sizeof(char) * ft_strleng(src)) + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoing(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdupg(s2));
	if (!(res = malloc(sizeof(char) * (ft_strleng(s1) + ft_strleng(s2) + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_substrg(char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	r;

	r = 0;
	if (!s)
		return (0);
	if (start > ft_strleng(s))
		len = 0;
	if (len + start > ft_strleng(s) && start < ft_strleng(s))
		len = (ft_strleng(s) - start);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (r < len)
	{
		res[r] = s[start];
		r++;
		start++;
	}
	res[r] = '\0';
	return (res);
}

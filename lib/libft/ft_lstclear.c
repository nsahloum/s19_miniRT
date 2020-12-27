/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 18:31:23 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/26 19:19:24 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list *tmp;
	struct s_list *next;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		(del)(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
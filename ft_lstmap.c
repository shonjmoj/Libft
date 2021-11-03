/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:45:18 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/03 08:43:42 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	else
	{
		t_list	*tmp;

		tmp = lst;
		while (tmp->next != NULL)
		{
			new = f(tmp->content);
			new = tmp;
			del(tmp->content);
			tmp = tmp->next;
		}
	}
	return (new);

}
	
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:53:03 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 16:53:03 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*t;

	i = 0;
	t = malloc(ft_strlen(str) + 1);
	if (!t)
		return (NULL);
	while (str[i])
	{
		t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

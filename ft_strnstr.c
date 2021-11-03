/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:09:14 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 17:09:14 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		k = 0;
		j = i;
		while (j < len && haystack[j] == needle[k])
		{
			if (!needle[k + 1])
				return ((char *)haystack + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}

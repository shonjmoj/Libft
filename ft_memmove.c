/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:47:12 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 16:47:12 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_memcmp(dest, src, n) == 0)
		return (dest);
	if (dest > src)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
		return (dest);
	}
	while (i < n || ((char *)dest == NULL && (char *)src == NULL))
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (!dest || !src || n == 0)
		return (NULL);
	return (dest);
}

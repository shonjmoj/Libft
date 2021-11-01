/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:28 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 16:11:28 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = malloc(sizeof(char) * (len) + 1);
	if (!sub || !s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start] && len != 0)
		{
			sub[i] = s[start];
			start++;
			len--;
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}

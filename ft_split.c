/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:34:35 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 17:34:35 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (j);
}

static char	*ft_allocate_word(const char *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, i + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	in;
	char	**words;

	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	in = 1;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (in)
				words[j++] = ft_allocate_word(s + i, c);
			in = 0;
		}
		else
			in = 1;
		i++;
	}
	words[j] = NULL;
	return (words);
}

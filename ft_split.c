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

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
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

static size_t	ft_len_word(char const *str, size_t i, char c)
{
	size_t	l;

	l = 0;
	if (str)
	{
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			l++;
		}
	}
	return (l);
}

static char	*ft_allocate_word(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	j = 0;
	word = malloc(ft_len_word(s, i, c) + 1);
	if (!word)
		return (NULL);
	while (j < ft_len_word(s, i, c))
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = ft_allocate_word(s + i, c);
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	words[j] = NULL;
	return (words);
}

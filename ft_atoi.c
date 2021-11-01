/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:47:26 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/01 11:52:45 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\f' || c == '\r'
		|| c == '\v' || c == ' ' || c == '\n');
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;
	long	val;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -sign;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = nb;
		nb = ((nb * 10) + (str[i] - 48) * sign);
		if (sign == 1 && val > nb)
			return (-1);
		if (sign == -1 && val < nb)
			return (0);
		i++;
	}
	return (nb);
}

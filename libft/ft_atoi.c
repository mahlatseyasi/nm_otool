/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:10:02 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:10:10 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char		ft_nospace(char c)
{
	if (c == '\n' || c == '\v' || c == '\t' || c == '\r'
			|| c == '\f' || c == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		n;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (ft_nospace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = 44 - str[i++];
	while (ft_isdigit(str[i]) == 1)
	{
		nbr = nbr * 10;
		n = str[i] - '0';
		nbr = nbr + n;
		i++;
	}
	return (nbr * sign);
}

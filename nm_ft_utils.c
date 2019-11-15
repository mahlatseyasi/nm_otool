/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_ft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 12:55:07 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/30 12:55:22 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *(uint8_t*)s1 == *(uint8_t*)s2)
	{
		s1++;
		s2++;
	}
	return (*(uint8_t*)s1 - *(uint8_t*)s2);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*ptrdst;

	ptrdst = dst;
	while (*src && len)
	{
		*(ptrdst++) = *(src++);
		len--;
	}
	while (len)
	{
		*(ptrdst++) = 0;
		len--;
	}
	return (dst);
}

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;

	result = 0;
	while ((*str == ' ') | (*str == '\n') | (*str == '\t') \
	| (*str == '\v') | (*str == '\f') | (*str == '\r'))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

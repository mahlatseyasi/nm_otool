/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:18:52 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:18:55 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	s1b;
	unsigned char	s2b;

	while (n > 0)
	{
		s1b = *(unsigned char *)s1;
		s2b = *(unsigned char *)s2;
		if (s1b != s2b)
			return (s1b - s2b);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

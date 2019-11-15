/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:18:27 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:18:31 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1b;
	const char		*s2b;

	i = 0;
	s1b = s1;
	s2b = s2;
	while (i != n)
	{
		s1b[i] = s2b[i];
		i++;
	}
	s1b = s1;
	return (s1);
}

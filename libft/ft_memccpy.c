/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:17:31 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:17:34 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t					i;
	unsigned char			d;
	unsigned char			*s1b;
	const unsigned char		*s2b;

	i = 0;
	d = (unsigned char)c;
	s1b = s1;
	s2b = s2;
	while (*s2b && (i < n))
	{
		if (s2b[i] == d)
		{
			s1b[i] = s2b[i];
			return (&((unsigned char*)s1b)[i + 1]);
		}
		s1b[i] = s2b[i];
		i++;
	}
	return (NULL);
}

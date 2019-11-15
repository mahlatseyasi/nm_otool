/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:20:18 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:21:24 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*buffer;
	size_t	i;

	i = 0;
	buffer = NULL;
	if ((buffer = (void *)malloc(sizeof(void *) * n)) == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)buffer)[i] = ((unsigned char *)s2)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)buffer)[i];
		i++;
	}
	return (s1);
}

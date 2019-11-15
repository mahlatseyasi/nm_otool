/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:16:45 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:16:48 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if ((str = ((void *)malloc(size))) == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}

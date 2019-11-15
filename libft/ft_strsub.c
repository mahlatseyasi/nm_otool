/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:33:04 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:33:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = NULL;
	i = 0;
	if ((new = (char *)malloc(sizeof(len + 1))) != NULL)
	{
		while (i < len)
		{
			new[i] = s[start];
			i++;
			start++;
		}
	}
	new[i] = '\0';
	return (new);
}

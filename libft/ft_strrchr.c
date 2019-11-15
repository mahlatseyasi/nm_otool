/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:29:37 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:29:59 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;

	b = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	if (b == '\0')
		return ((char *)&s[i]);
	while (s[i] != s[0])
	{
		i--;
		if (s[i] == b)
			return ((char *)&s[i]);
	}
	return (NULL);
}

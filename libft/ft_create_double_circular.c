/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_double_circular.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:11:00 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:11:02 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_select.h"

t_list		**ft_create_double_circular(void)
{
	static t_list	*racine = NULL;

	if (racine == NULL)
	{
		if ((racine = (t_list *)malloc(sizeof(t_list))) == NULL)
			return (NULL);
		racine->next = racine;
		racine->prev = racine;
		racine->content = NULL;
		racine->selected = 0;
	}
	return (&racine);
}

t_list		**ft_create2(void)
{
	static t_list	*racine = NULL;

	if (racine == NULL)
		racine = *CONFIG;
	return (&racine);
}

t_list		**ft_create3(void)
{
	static t_list	*racine = NULL;

	if (racine == NULL)
		racine = (*ft_create2())->next;
	return (&racine);
}

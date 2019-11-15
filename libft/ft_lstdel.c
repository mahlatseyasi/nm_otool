/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:15:01 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:16:00 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	temp = *alst;
	while (temp != NULL)
	{
		del((temp)->content, (temp)->content_size);
		temp = (temp)->next;
		free(temp);
	}
	free(*alst);
	*alst = NULL;
}

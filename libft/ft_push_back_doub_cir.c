/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back_doub_cir.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:23:32 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/30 13:01:47 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_select.h"

t_list	*ft_push_back_doub_cir(t_list **element, char *content)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((new->content = ft_strdup(content)) == NULL)
		return (NULL);
	ft_strcpy(new->content, content);
	new->prev = (*element)->prev;
	new->next = (*element);
	(*element)->prev->next = new;
	(*element)->prev = new;
	(*element)->selected = 0;
	return (*element);
}

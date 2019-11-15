/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front_doub_circ.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:23:52 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/09 10:23:56 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_select.h"

t_list	*ft_push_front_doub_cir(t_list *element, char *content)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((new->content = ft_strdup(content)) == NULL)
		return (NULL);
	ft_strcpy(new->content, content);
	new->prev = element;
	new->next = element->next;
	element->next->prev = new;
	element->next = new;
	element->selected = 0;
	return (element);
}

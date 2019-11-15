/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_sections.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:57:16 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/30 12:57:20 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

t_section	*sections(void)
{
	static t_section	sections = {0, 0, 0, 0};

	return (&sections);
}

void		reset_sections(void)
{
	sections()->index = 0;
	sections()->text = 0;
	sections()->data = 0;
	sections()->bss = 0;
}

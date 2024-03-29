/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_fat32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:59:01 by mkhoza            #+#    #+#             */
/*   Updated: 2019/08/30 12:53:43 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

static int	is_hostarch(cpu_type_t type)
{
	if ((type == CPU_TYPE_X86_64) && (sizeof(void *) == 8))
		return (1);
	if ((type == CPU_TYPE_I386) && (sizeof(void *) == 4))
		return (1);
	return (0);
}

int			handle_fat32(void *ptr, char *filename, off_t size)
{
	uint32_t			nfat;
	uint32_t			i;
	struct fat_header	*header;
	struct fat_arch		*arch;

	header = (struct fat_header *)ptr;
	nfat = swap_uint32(header->nfat_arch);
	arch = (struct fat_arch *)(header + 1);
	i = -1;
	while (++i < nfat)
	{
		if (nfat > 1 && !i && is_hostarch(swap_uint32(arch[i + 1].cputype)))
			continue ;
		if (nfat > 1 && !is_hostarch(swap_uint32(arch[i].cputype)))
		{
			write(1, "\n", 1);
			write(1, filename, ft_strlen(filename));
			i == 0 ? write(1, PPC_STRING, ft_strlen(PPC_STRING)) \
					: write(1, I386_STRING, ft_strlen(I386_STRING));
		}
		ft_nm(ptr + swap_uint32(arch[i].offset), filename, 0, size);
		if (is_hostarch(swap_uint32(arch[i].cputype)))
			return (EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}

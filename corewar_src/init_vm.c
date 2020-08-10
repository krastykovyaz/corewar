/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:52:25 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/09 15:26:45 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void	print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t 			j;
	unsigned char	*p;
	char 			*str;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, &str[(*(p + i + j)/16) % 16], 1);
			write(1, &str[*(p + i + j) % 16], 1);
			if (j % 2)
				write(1, " ", 1);
			j += 1;
		}
		while (j < 16)
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(p + i + j) >= 32 && *(p + i + j) < 127)
				write(1, p + i + j, 1);
			else
				write(1, ".", 1);
			j += 1;
		}
		write(1, "\n", 1);
		i += 16;
	}
}

static void copy_excode(t_vm *vm, t_players *players)
{
    int i;
    int pos;

    i = 0;
    while (i < players->iter)
    {
        pos = (MEM_SIZE / players->iter) * i;
        ft_memcpy(&(vm->arena[pos]), players->arr[i]->ex_code, \
        players->arr[i]->ex_size);
        i++;
    }
}

static void init_vm_arena(t_vm *vm, t_players *players)
{
    vm->cycle_to_die = CYCLE_TO_DIE;
    copy_excode(vm, players);
}

void    init_vm(t_vm *vm, t_players *players)
{
    init_vm_arena(vm, players);
    // print_memory(vm->arena, MEM_SIZE);
    init_carry(vm, players->size);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 22:09:18 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/20 17:15:06 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void game(t_vm *vm)
{
    int end;
    t_car *tmp;

    end = 0;
    while(!end)
    {
        // printf("last = %i\n", vm->carry->last_live_cycle);
        if (vm->cur_cycle++ == vm->dump_value && end_dump(vm))
            break ;
        tmp = vm->carry;
        // printf("%i\n", tmp->carry);
        while (tmp)
            tmp = check_carry(vm, tmp);
        if (++vm->iter >= vm->cycle_to_die && !check_live(vm))
            end = conclusion(vm, &vm->players);
    }
}

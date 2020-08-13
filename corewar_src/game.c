/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 22:09:18 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/13 14:59:50 by lnoisome         ###   ########.fr       */
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
        tmp = vm->carry;
        while (tmp)
            tmp = check_carry(vm, tmp);
        if (++vm->iter >= vm->cycle_to_die && !check_live(vm))
            end = 1;
    }
}

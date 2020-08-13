/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_carry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:46:34 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/13 13:47:07 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

unsigned char read_byte(t_vm *vm, int position)
{
    unsigned char value;

    value = vm->arena[position];
    return (value);
}

int get_pos(t_car *car, int position)
{
    int new_position;

    new_position = car->position + position;
    if (new_position >= MEM_SIZE || -new_position >= MEM_SIZE)
        new_position %= MEM_SIZE;
    if (new_position < 0)
        new_position += MEM_SIZE;
    return (new_position);
}

t_car *check_carry(t_vm *vm, t_car *car)
{
    car->last_live_cycle++;
    if (!car->cycle_to_action)
    {
        car->code = read_byte(vm, car->position) - 1;
        if (car->code >= 0 && car->code < REG_NUMBER)
            car->cycle_to_action = vm->operations.op_cycles[car->code] - 1;
        else
            car->position = get_pos(car, 1);
    }
    else if (!(--car->cycle_to_action))
        oper_func(vm, car, &vm->operations.arg, car->code);
    return(car->next);
}
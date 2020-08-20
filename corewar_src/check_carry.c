/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_carry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:46:34 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/20 17:45:49 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

t_car *check_carry(t_vm *vm, t_car *car)
{
    car->last_live_cycle++;
    if (!car->cycle_to_action)
    {
        car->code = read_1_byte(vm, car->position) - 1;
        // printf("car_code = %i\n", car->code);
        if (car->code >= 0 && car->code < REG_NUMBER)
        {
            // printf("f\n");
            // printf("pos1 = %i\n", car->position);
            car->cycle_to_action = vm->operations.op_cycles[car->code] - 1;
            // printf("car = %i\n", car->carry);
	        // printf("pos = %i\n", car->position);
            // printf("code = %i\n", car->code);
        }
        else
            car->position = get_pos(car, 1);
    }
    else if (!(--car->cycle_to_action))
    {
        oper_func(vm, car, &vm->operations.arg, car->code);
        
    }
    return(car->next);
}
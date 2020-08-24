/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_and.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 09:51:52 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/20 18:39:53 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void o_and(t_vm *vm, t_car *car, t_args *arg)
{
    int val;

    arg->first = def_arg(vm->arena[get_pos(car, car->step)], 0);
    arg->second = def_arg(vm->arena[get_pos(car, car->step)], 1);
    arg->third = def_arg(vm->arena[get_pos(car, car->step)], 2);
    car->step += 1;
    // printf("one=%i\n", arg->first);
	// printf("se=%i\n", arg->second);
	// printf("th=%i\n", arg->third);
    if (arg->first != 0 && arg->second != 0 && arg->third != 0 && \
    get_dir_4(vm, car, arg->first, &arg->f_val) && \
    get_dir_4(vm, car, arg->second, &arg->s_val))
    {
        val = arg->f_val & arg->s_val;
        // printf("%i\n", arg->f_val);
        write_to_reg(vm, car, val, arg->third);
    }
    change_pos(car, arg, 3);
    // printf("%i\n", car->position);
}
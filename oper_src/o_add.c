/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_add.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:23:17 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/19 14:48:04 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void o_add(t_vm *vm, t_car *car, t_args *arg)
{
	arg->first = def_arg(vm->arena[get_pos(car, car->step)], 0);
	arg->second = def_arg(vm->arena[get_pos(car, car->step)], 1);
	arg->third = def_arg(vm->arena[get_pos(car, car->step)], 2);
	if (arg->first == REG_CODE && arg->second == REG_CODE && arg->third == REG_CODE)
		plus_minus(vm, car, arg, 1);
	change_pos(car, arg, 3);
	// printf("%i\n", car->position);
}
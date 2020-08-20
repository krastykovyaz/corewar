/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_aff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 09:15:05 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/20 13:31:50 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void o_aff(t_vm *vm, t_car *car, t_args *arg)
{
    int val;

    arg->first = def_arg(vm->arena[get_pos(car, car->step)], 0);
    // printf("%i\n", arg->first);
    // printf("%i\n", vm->aff);
    car->step += 1;
    if (arg->first == REG_CODE && vm->aff != 0)
    {
        arg->f_val = read_1_byte(vm, get_pos(car, car->step)) - 1;
        // printf("%i\n", arg->f_val);
        if (arg->f_val >= 0 && arg->f_val < REG_NUMBER)
        {
            val = (char)car->regist[arg->f_val];
            ft_putstr("AFF: ");
            ft_putchar(val);
            ft_putchar('\n');
        }
    }
    // printf("%i\n", arg->first);
    change_pos(car, arg, 1);
    // printf("%i\n", car->position);
}
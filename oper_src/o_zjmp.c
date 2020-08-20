/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_zjmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:58:03 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/20 19:30:00 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void o_zjmp(t_vm *vm, t_car *car, t_args *arg)
{
    int arg_dir;

    (void)arg->first;
    if (car->carry)
    {
        // printf("f\n");
        // printf("+++%i\n", car->position);
        arg_dir = read_2_bytes(vm, (car->position + 1) % MEM_SIZE);
        // printf("arg_dir = %i\n", arg_dir);
        car->position = get_pos(car, arg_dir % IDX_MOD);
        // printf("----------%i\n", car->position);
    }
    else{
        // printf("f2\n");
        // printf("%i\n", car->carry);
        car->position = (car->position + 3) % MEM_SIZE;}
}
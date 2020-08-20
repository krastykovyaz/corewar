/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_dump.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:47:24 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/18 11:56:38 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

int end_dump(t_vm *vm)
{
    t_car *tmp;
    // printf("%i\n", vm->dump_size);
    print_memory(vm->arena, vm->dump_size);
    tmp = vm->carry;
    // while(tmp)
    //     tmp = del_func(&vm->carry, tmp);
    return (1);
}
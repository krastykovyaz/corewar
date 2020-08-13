/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 12:27:42 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/13 14:57:32 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef OPER_H
# define OPER_H

#include "../includes/corewar.h"

#include "vm.h"

typedef struct s_vm t_vm;
typedef struct s_car t_car;

typedef struct s_args
{
    int first;
    int second;
    int third;
    int f_val;
    int s_val;
    int t_val;
} t_args;

typedef struct s_op
{
	int op_cycles[16];
    t_args arg;
} t_op;

void set_oper(t_vm *vm);
void oper_func(t_vm *vm, t_car *car, t_args *arg, int i);

#endif
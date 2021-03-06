/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_4_bytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 09:37:14 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/26 20:24:33 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int	read_4_bytes(t_vm *vm, int position)
{
	int val;
	int i;

	i = 0;
	val = 0;
	while (i < 4)
	{
		*((char *)&val + 3 - i) = vm->arena[(position + i) % MEM_SIZE];
		i++;
	}
	return (val);
}

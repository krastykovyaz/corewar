/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 20:01:44 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/19 13:24:00 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void change_pos(t_car *car, t_args *args, int type)
{
	int step;

	step = 1 + 1;
	if (type == 1)
		step += args->first;
	else if (type == 2)
		step += args->first + args->second;
	else
		step += args->first + args->second + args->third;
	car->position = get_pos(car, step);
	car->step = 1;
}
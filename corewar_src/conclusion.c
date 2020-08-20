/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conclusion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 09:47:41 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/19 10:36:52 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

int conclusion(t_vm *vm, t_players *players)
{
    t_player *winner;
    int id;

    id = vm->win_id;
    winner = players->arr[vm->win_id - 1];
    ft_putstr("Contestant ");
    ft_putnbr(id);
    ft_putstr(", \"");
    ft_putstr(winner->name);
    ft_putstr("\", has won !\n");
    return (1);
}
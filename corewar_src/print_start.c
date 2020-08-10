/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 16:30:23 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/10 19:42:07 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void print_start(t_players *players)
{
    int i;
    char n;
    char *weight;

    i = 0;
    n = '0';
    write(1, "Introducing contestants...\n", 27);
    while (i < players->size)
    {
        write(1, "Player ", 7);
        n++;
        write(1, &n, 1);
        write(1, ", weighing ", 11);
        ft_putnbr(players->arr[i]->ex_size);
        write(1, " bytes, \"", 10);
        ft_putstr(players->arr[i]->name);
        write(1, "\" (\"", 4);
        ft_putstr(players->arr[i]->comment);
        write(1, "\") !", 4);
        write(1, "\n", 1);
        i++;
    }
}
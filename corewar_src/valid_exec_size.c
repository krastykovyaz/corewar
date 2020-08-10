/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_exec_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:57:16 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/10 11:26:36 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void valid_exec_size(t_pars *pars, t_players *players)
{
    unsigned char buf[5];
    unsigned int exec_size;
    int i;
    int j;

    if ((read(pars->fd, buf, 4)) != 4)
        ft_error("Exec_code is invalid", "valid_exc_size", 2);
    // buf[4] = '\0';
    exec_size = bit_shift(buf, 4);
    // printf("%x\n", players->arr[players->iter]->ex_size);
    if (exec_size > CHAMP_MAX_SIZE)
        ft_error("Ex_code is invalid", "valid_ex_size", 2);
    players->arr[players->iter]->ex_size = exec_size;
}
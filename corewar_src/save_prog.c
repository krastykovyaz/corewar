/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:17:36 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 09:54:55 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void save_prog(unsigned char *buffer, header_t *stut)
{
    int i;
    unsigned int prog_num;

    // i = 0;
    // prog_num = 0;
    // prog_num = bit_shift(buffer, 136);
    // if (prog_num != 0x00){
    //     write(2, "Error\n", 6);
    //     exit (1);
    // }
    prog_num = bit_shift(buffer, 4);
    // printf("%i\n", prog_num);
    if (prog_num < CHAMP_MAX_SIZE)
        stut->prog_size = prog_num;
    else
        write(2, "Error\n", 6);
    
}
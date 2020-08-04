/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 22:30:07 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 22:44:25 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void    magic_func(unsigned char *buffer, header_t *stut)
{
    int i;
    unsigned int magic_int;

    i = 0;
    magic_int = 0;
    while (i < 4)
    {
        magic_int |= buffer[i];
        if (i == 3)
            break ;
        magic_int <<= 8;
        i++;
    }
    // printf("%x\n", magic_int);
    if (magic_int == COREWAR_EXEC_MAGIC)
        stut->magic = (unsigned int)magic_int;
}
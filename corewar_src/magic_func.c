/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 22:30:07 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/05 14:48:29 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void    magic_func(unsigned char *buffer, header_t *stut)
{
    int i;
    unsigned int magic_int;

    i = 0;
    magic_int = bit_shift(buffer, 4);
    // printf("%x\n", magic_int);
    if (magic_int == COREWAR_EXEC_MAGIC)
        stut->magic = (unsigned int)magic_int;
}
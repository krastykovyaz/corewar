/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   null_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 21:45:17 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/05 21:49:51 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void null_check(unsigned char *buffer, header_t *stut)
{
    int none;

    none = bit_shift(buffer, 8);
    printf("%x\n", none);

}
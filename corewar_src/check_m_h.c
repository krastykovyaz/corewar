/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_m_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:39:18 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/09 08:36:09 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void check_m_h(t_pars *pars)
{
    unsigned char buf[4];
    unsigned int magic;

    if ((read(pars->fd, &buf, 4)) < 4)
        ft_error("Magic header is invalid", "check_m_h", 2);
    magic = bit_shift(buf, 4);
    if (magic != COREWAR_EXEC_MAGIC)
        ft_error("Magic header is invalid", "check_m_h", 2);
}
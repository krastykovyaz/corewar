/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 09:34:04 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 19:04:33 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

t_cw    *create_struct(void)
{
    t_cw *field;

    field = (t_cw *)malloc(sizeof(t_cw));
    field->champ_list = NULL;
    field->i_champ = 0;
    field->count = 0;
    field->f = 0;
    field->nb_ch = NULL;
    field->battlefield = MEM_SIZE;
    return (field);
}
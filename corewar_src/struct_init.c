/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 22:00:04 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 22:21:20 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

header_t *struct_init(void)
{
    header_t *stut;

    stut = (header_t *)malloc(sizeof(header_t));
    stut->magic = 0;
    stut->prog_size = 0;
    return (stut);
}
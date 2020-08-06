/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_comment_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:21:25 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 19:45:18 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void name_comment_func(char *buffer, header_t *stut, int f)
{
    if (!f)
        ft_strcpy(stut->prog_name, buffer);
    else
        ft_strcpy(stut->comment, buffer);
    // printf("%s\n", stut->prog_name);
    // printf("%s\n", stut->comment);
    // printf("%s\n", stut->exec_code);
}
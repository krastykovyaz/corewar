/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:46:06 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/07 20:33:51 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void ft_error(const char * msg, const char *str, int code)
{
    if (str)
    {
        write(2, "\e[38;5;196mError\e[0m in function ", 33);
        write(2, str, ft_strlen(str));
    }
    if (msg)
    {
        if (!str)
            write(2, "\e[38;5;196mError\e[0m", 20);
        write(2, ": ", 2);
        write(2, msg, ft_strlen(msg));
    }
    if (str || msg)
        write(2, "\n", 1);
    exit(code);
}

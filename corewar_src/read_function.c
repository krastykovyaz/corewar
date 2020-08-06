/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:24:07 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 20:50:16 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void read_function(int ac, char **av, t_cw *field)
{
    int i;

    i = 1;
    while (av[i] != '\0')
    {
        if (!ft_strcmp(av[i], "-n"))
            i++;
        else
	        read_file(ac, &av[i], field);
        field->champ_list = field->champ_list->next;
        i++;
    }
}
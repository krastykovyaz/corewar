/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 20:03:18 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 18:32:43 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void valid_line(int ac, char **av, t_cw *field)
{
    if (ac > 1)
    {
        field->count = check_files(ac, av);
        ac = check_flag(ac, av, field);
        if (field->count != (ac - 1)){
           printf("Error\n");
        }
    }
    else
    {
        printf("Error\n");
        exit (1);
    }
}

int main(int ac, char **av)
{
    t_cw *field;

    field = create_struct();
    valid_line(ac, av, field);
    read_function(ac, av, field);
    init_battlefield(ac, av, field);
	free_core(field);
    return (0);
}
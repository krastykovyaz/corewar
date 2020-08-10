/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 18:43:02 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/10 10:09:43 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

static void init_pars(t_pars *pars, int ac, char **av)
{
    ft_memset(pars, 0, sizeof(t_pars));
    pars->ac = ac;
    pars->av = av;
    pars->i = 1;
    pars->dump_flag = 0;
}

void parsing(t_players *players, int ac, char **av)
{
    t_pars pars;

    init_pars(&pars, ac, av);
    if (pars.ac < 2)
        ft_error("Nobody play", NULL, 1);
    else if (pars.ac > MAX_PLAYERS * 3 + 2)
        ft_error("Too many data", NULL, 1);
    while (pars.i < pars.ac)
    {
        if ((ft_strequ(pars.av[pars.i], "-dump") || ft_strequ(pars.av[pars.i], "-d")) && \
    valid_dump(&pars, players))
            continue ;
        if ((ft_strequ(pars.av[pars.i], "-n")))
            valid_n(&pars, players);
        else
            valid_name(&pars, players);
        pars_champ(&pars, players);
    }
    if (players->iter == 0)
        ft_error("Nobody play", NULL, 2);
    validate_id(players);
    if (players->iter != players->size)
        finish_players(players, players->iter);
}
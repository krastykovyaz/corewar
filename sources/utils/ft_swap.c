/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:36:23 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/26 20:21:24 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	ft_swap(t_player **a, t_player **b)
{
	t_player *c;

	c = *a;
	*a = *b;
	*b = c;
}

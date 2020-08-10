/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:40:53 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/09 15:25:35 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void	ft_lstadd_start(t_car **head, t_car *new)
{
	if (*head)
	{
		(*head)->prev = new;
        new->next = *head;
		new->prev = NULL;
        *head = new;
	}
    else
        *head = new;
}

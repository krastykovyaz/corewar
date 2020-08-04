/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 12:05:19 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 10:20:46 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void separate(char *champion, t_cw *field)
{
    // char * champion;
    t_list *list;
 
    list = ft_lstnew(champion, ft_strlen(champion) + 1);
    ft_lstadd(&(field->champ_list), list);
    if (field->f == 1)
        field->champ_list->player = field->i_champ;
    else
        field->champ_list->player = -1;
}
   
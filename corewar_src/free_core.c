/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:01:05 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 13:20:52 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	del_content(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

void free_core(t_cw *field)
{
    if (field->champ_list != NULL)
	{
		ft_lstdel(&(field->champ_list), &del_content);
		field->champ_list = NULL;
	}
    ft_memdel((void**)&field);
}
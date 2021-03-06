/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   def_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:08:57 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/26 20:22:03 by rgero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int	def_arg(unsigned char code, unsigned arg)
{
	const unsigned char pos = 0b11000000;

	code = (code << (arg << 1));
	code = code & pos;
	if (code == 0b01000000)
		return (REG_CODE);
	if (code == 0b10000000)
		return (DIR_SIZE);
	if (code == 0b11000000)
		return (IND_SIZE);
	else
		return (0);
}

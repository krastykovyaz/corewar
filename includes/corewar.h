/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:07:35 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/09 18:43:12 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREWAR_H
# define COREWAR_H

# include <stddef.h>
# include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
# include "vm.h"
// # include "op.h"
# include "lidft.h"



void		init_data(t_vm *vm, int ac, char **av);
int main(int ac, char **av);
void *ft_calloc(size_t elem, size_t size_elem);
void ft_error(const char * msg, const char *func, int code);
void parsing(t_players *s_players, int ac, char **av);
void init_vm(t_vm *vm, t_players *players);
int valid_dump(t_pars *pars, t_players *players);
void valid_n(t_pars *pars, t_players *players);
void valid_name(t_pars *pars, t_players *players);
void				validate_id(t_players *players);
void pars_champ(t_pars *pars, t_players *players);
void check_m_h(t_pars *pars);
void valid_champ_name(t_pars *pars, t_players *players);
unsigned int bit_shift(unsigned char *buffer, int i);
void valid_exec_size(t_pars *pars, t_players *players);
void check_comment(t_pars *pars, t_players *players);
void valid_ex_code(t_pars *pars, t_players *players);
void finish_players(t_players *players, int new_size);
void init_carry(t_vm *vm, int iter);
void	ft_lstadd_start(t_car **head, t_car *new);
t_car    *ft_lstnew(int position, int id);
void print_start(t_players *player);


#endif
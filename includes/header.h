/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 19:04:52 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 22:43:25 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define FD_SIZE 100
# define BUFF_SIZE 1000

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
# include "./libft.h"
# include "./op.h"

typedef struct	c_w
{
	t_list		*champ_list;
	char		*name_champ;
	int			i_champ;
	int			count;
	int			f;
	int			*nb_ch;
}				t_cw;

int				main(int ac, char **av);
int check_files(int number, char **file);
int				get_next_line(const int fd, char **line);
t_cw			*create_struct(void);
void separate(char *champion, t_cw *field);
int check_flag(int ac, char **av, t_cw *field);
int		*put_zero(int n);
void			read_file(int ac, char **av);
void			free_core(t_cw *field);
header_t *struct_init(void);
void    magic_func(unsigned char *buffer, header_t *stut);
#endif

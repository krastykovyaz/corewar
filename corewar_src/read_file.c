/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:34:08 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 22:42:33 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/header.h"

void printbincharpad(char c)
{
    for (int i = 7; i >= 0; --i)
    {
        ft_putchar( (c & (1 << i)) ? '1' : '0' );
    }
    ft_putchar('\n');
}

void read_file(int ac, char **av)
{
    int	fd;
	unsigned char buffer[4];
    header_t *stut;

    stut = struct_init();
    // printf("%s", av[1]);
    fd = open(av[1], O_RDONLY);
    read(fd, buffer, 4);
    magic_func(buffer, stut);

    // while(i < 4)
    // {
    //     printf("%x\n", buffer[i]);
    // //     printbincharpad(buffer[i]);
    //     i++;
    // }
    
    close(fd);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 07:51:43 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 10:05:33 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

// void printbincharpad(char c)
// {
//     for (int i = 7; i >= 0; --i)
//     {
//         ft_putchar( (c & (1 << i)) ? '1' : '0' );
//     }
//     ft_putchar('\n');
// }

void name_func(char *buffer, header_t *stut)
{
    char *name;
    int i;
    int name_int;
    // int size;
    int j;

    // name_int = bit_shift(buffer, PROG_NAME_LENGTH);
    // i = 4;
    name = (char *)malloc(sizeof(buffer) + 1);
    name[sizeof(buffer)] = '\0'; 
    ft_memcpy(name, buffer, sizeof(buffer));
    // i = 0;
    // j = 0;
    // while (j < PROG_NAME_LENGTH / 2)
    // {
    //     stut->prog_name[i] = name[j];
    //     printf("%i", stut->prog_name[i]);
    //     i++;
    //     j++;
    // }
    // stut->prog_name[i] = '\0';
    ft_strcpy(stut->prog_name, name);
    // printf("%s\n", stut->prog_name);
    ft_strdel(&name);
    // len = ft_strlen((const char *)buffer);
    // printf("%i\n", len);

    // while (i < PROG_NAME_LENGTH)
    // {
    //     name_int |= buffer[i];
    //     if (buffer[i + 1] == 0x00)
    //         break ;
    //     name_int <<= 8;
    //     i++;
    // }
    // name = calloc(PROG_NAME_LENGTH + 1, sizeof(char));
    // name[size] = '\0';
    // ft_memcpy(name, buffer, size);
    // stut->prog_name = name;
    // j = 0;
    // int m = 0;
    // // ft_memcpy(stut->prog_name, buffer, PROG_NAME_LENGTH + 1);
    // while(m < PROG_NAME_LENGTH / 2)
    // {
    //     if (m > 3)
    //     {
    //         stut->prog_name[j] = buffer[m];
    //         // printf("%i\n", stut->prog_name[j]);
    //         j++;
    //     }
    //     m++;   
    // }
    // while (j < PROG_NAME_LENGTH)
    // {
    //     stut->prog_name[j] = 0;
    //     printf("%i", stut->prog_name[j]);
    //     j++;  
    // }
    // stut->prog_name[j] = '\0';
    // printf("j=%i\n", j);
    // j = 0;
    // while(j < 128)
    // {
    //     // stut->prog_name[j] = 0;
    //     printf("%c\n", stut->prog_name[j]);
    //     j++;
    // }
    // printf("z=%i\n", z);
    // printf("%x\n", stut->prog_name);
    // int i= 0;
    // while(i < PROG_NAME_LENGTH)
    // {
    //     // printf("%x\n", buffer[i]);
    //     printbincharpad(buffer[i]);
    //     i++;
    // }
}
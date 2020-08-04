/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 09:46:44 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/03 14:55:49 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int check_files(int number, char **file)
{
    int i;
    int j;
    int count;

    i = 1;
    count = 0;
    while (i < number)
    {
        j = 0;
        while (file[i][j] != '\0')
        {
            if (file[i][j] == '.' && file[i][j + 1] == 'c' && file[i][j + 2] == 'o' && file[i][j + 3] == 'r' && file[i][j + 4] == '\0')
                count++;
            
            if (file[i][j] == '.' && file[i][j + 1] == 'c' && file[i][j + 2] == 'o' && file[i][j + 3] == 'r' && !(file[i][j + 4] == '\0'))
            {
                printf("Error\n");
                exit(1);
            }
            
            // if (file[i][j] == '-' && file[i][j + 1] == 'n' && file[i][j + 2] == '\0' && j == 0)
            //     printf("fix\n");
            j++;
        }
        i++;
    }
     
    if (count > MAX_PLAYERS)
    {
        printf("Error\n");
        exit(1);
    }
    return (count);
}
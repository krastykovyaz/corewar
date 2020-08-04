/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:20:24 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/04 12:57:08 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/header.h"

static void reverse(t_list **tmp)
{
    t_list *prev;
    t_list *current;
    t_list *next;

    prev = NULL;
    next = NULL;
    current = *tmp;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *tmp = prev;
}

void check_repeats(t_cw *field)
{
    t_list *tmp;
    int i;
    int f;

    i = 1;
    f = 0;
    
    reverse(&(field->champ_list));
    while (i <= field->count + 1)
    {
        tmp = field->champ_list;
        while(tmp != 0)
        {
            if (i == tmp->player)
            {
                f = 1;
                break ;
            }
            tmp = tmp->next;
        }
        if (f == 0){
        tmp = field->champ_list;
        while(tmp != 0)
        {
            if (tmp->player == -1){
                tmp->player = i;
                break ;}
            tmp = tmp->next;
        }}
        f = 0;
        i++;
    }
}

void check_n(t_cw *field)
{
    int *ar;
    int i;
    int j;
    int count;

    j = 0;
    count = 0;
    ar = field->nb_ch;
    while (ar[j] != 0)
    {
        i = 0;
        while (ar[i] != 0)
        {
            if (ar[i] == ar[j])
                count++;
            if (count > 1)
            {
                printf("Error\n");
                exit (1);
            }
            i++;
        }
        ft_memdel((void **)&ar);
        count = 0;
        j++;
    }
}

int check_flag(int ac, char **av, t_cw *field)
{
    int i;
    int j; 
    int num;

    j = 0;
    i = 0;
    num = 0;
    field->nb_ch = put_zero(field->count);
    while (av[i] != '\0')
    {
        if (!(ft_strcmp(av[i], "-n")) && av[i + 1] != '\0')
        {
            i += 1;
            num = ft_atoi(av[i]);
            if (num > 0 && av[i + 1] != '\0' && num <= field->count){
                field->f = 1;
                field->i_champ = num;
                field->nb_ch[j] = num;
                i++;
                ac -= 2;
                j++;
            }
            separate(av[i], field);
        }
        else if (i >= 1)
            separate(av[i], field);
        
        field->f = 0; 
        if (!(ft_strcmp(av[i], "-dump")))
            ac -= 1;
        i++;    
    }
    check_n(field);
    check_repeats(field);
    while (field->champ_list != 0)
    {
        // printf("i=%s\n", field->champ_list->content);
        // printf("i=%i\n", field->champ_list->player);
        field->champ_list = field->champ_list->next;
    }
    return (ac);
}
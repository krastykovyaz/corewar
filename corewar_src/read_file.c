/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:34:08 by lnoisome          #+#    #+#             */
/*   Updated: 2020/08/06 20:45:41 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/header.h"

void ex_read(int fd, header_t *stut, t_cw *field)
{
    unsigned char buf[stut->prog_size];
    int hex;
    int ret;
    // int i;

    // i = 0;
    // hex = 0;
    // field->champ_list->exec_code= (int *)malloc(sizeof(stut->prog_size));
    // field->champ_list->exec_code = put_zero(stut->prog_size);
    // printf("f\n");
    // while (i < stut->prog_size)
    // {
        ret = read(fd, buf, stut->prog_size);
        // if (ret == 0)
        //     break ;
        // hex = bit_shift(buf, 2);
        stut->exec_code = buf;
        printf("ret = %i, buf = %s\n", ret,  stut->exec_code);
        // i++;
    // }
    // printf("ret = %i, hex = %x\n", ret,  hex);
    printf("=========\n");
    
}

void read_file(int ac, char **av, t_cw *field)
{
    int	fd;
    // int df;
    // int null_df;
    // int com_fd;
    unsigned char buf_null[4];
	unsigned char buffer[4];
    char buf[PROG_NAME_LENGTH + 1];
    unsigned char buf_prog_size[4];
    char buf_com[COMMENT_LENGTH + 1];
    header_t *stut;
    int ret;

    stut = struct_init();
    // printf("%s", av[1]);
    fd = open(*av, O_RDONLY);
    read(fd, buffer, 4);
    magic_func(buffer, stut);
    // df = open(av[1], O_RDONLY);
    ret = read(fd, buf, PROG_NAME_LENGTH);
    buf[ret] = '\0';
    // printf("ret = %d, buf = |%s|\n", ret, buf);
    // name_func(buf, stut);
    name_comment_func(buf, stut, 0);
    read(fd, buf_null, 4);
    read(fd, buf_prog_size, 4);
    save_prog(buf_prog_size, stut);
    // printf("ret = %d, prog_size = %u\n", ret , stut->prog_size);
    ret = read(fd, buf_com, COMMENT_LENGTH);
    buf_com[ret] = '\0';
    name_comment_func(buf_com, stut, 1);
    read(fd, buf_null, 4); //2192 byte
    ex_read(fd, stut, field);


    // printf("ret = %d, buf_com = |%s|\n", ret, stut->comment);
    // buf[PROG_NAME_LENGTH] = '\0';
    // name_func(buf, stut);
    // null_df = open(av[1], O_RDONLY);
    // read(null_df, b_null, 140);
    // save_prog(b_null, stut);
    // // com_fd = open(av[1], O_RDONLY);
    // read(null_df, buf_com, COMMENT_LENGTH);
    // comment_func(buf, stut);
    // read(null_df, buf_null, 4);
    // null_check(buf_null, stut);
    


    close(fd);
}
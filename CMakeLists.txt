cmake_minimum_required(VERSION 3.16)
project(corewar C)

set(CMAKE_C_STANDARD 99)

add_executable(corewar ./corewar_src/main.c includes/header.h includes/libft.h includes/op.h
                ./corewar_src/check_files.c
        ./corewar_src/create_struct.c
        ./corewar_src/get_next_line.c
        ./corewar_src/check_flag.c
        ./corewar_src/separate.c
        ./libft_src/ft_strlen.c
        ./libft_src/ft_atoi.c
        ./libft_src/ft_isinteger.c
        ./libft_src/ft_lstadd.c
        ./libft_src/ft_lstdel.c
        ./libft_src/ft_lstnew.c
        ./libft_src/ft_memcpy.c
        ./libft_src/ft_memdel.c
        ./libft_src/ft_memset.c
        ./libft_src/ft_putchar.c
        ./libft_src/ft_putnbr.c
        ./libft_src/ft_putstr.c
        ./libft_src/ft_strcat.c
        ./libft_src/ft_strchr.c
        ./libft_src/ft_strcmp.c
        ./libft_src/ft_strcpy.c
        ./libft_src/ft_strdel.c
        ./libft_src/ft_strdub.c
        ./libft_src/ft_strequ.c
        ./libft_src/ft_strjoin.c
        ./libft_src/ft_strdel.c
        ./libft_src/ft_strnew.c
        ./libft_src/ft_strsplit.c
        ./libft_src/ft_strsub.c
        ./corewar_src/put_zero.c
        ./corewar_src/read_file.c
        ./corewar_src/free_core.c
        ./corewar_src/read_file.c
        ./corewar_src/magic_func.c
        ./corewar_src/struct_init
        ./corewar_src/bit_shift.c
        ./corewar_src/save_prog.c
        ./corewar_src/name_comment_func.c
        )
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/31 22:43:12 by lnoisome          #+#    #+#              #
#    Updated: 2020/08/04 22:35:56 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COREWAR_NAME = corewar

RED = "\033[1;31m"
GREEN = "\033[1;32m"
RESET = "\033[0;0m"
CYAN = "\033[1;35m"

CC = gcc
# FLAGS = -Wall -Wextra -Werror
FLAGS = -g


COREWAR_DIR = ./corewar_src/
COREWAR_HEADER = ./includes/

C_SRC = main.c \
	get_next_line.c \
	create_struct.c \
	check_files.c \
	separate.c \
	check_flag.c \
	put_zero.c \
	read_file.c \
	free_core.c \
	struct_init.c \
	magic_func.c

C_FILES = $(addprefix $(COREWAR_DIR), $(C_SRC))
C_OBJ = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.o, $(C_SRC)))
D_FILES_LEM = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.d, $(C_SRC)))

LIBFT_DIR = ./libft_src/

L_SRC = ft_memset.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdub.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_strsub.c \
		ft_atoi.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_memdel.c \
		ft_isinteger.c \
		ft_strequ.c \
		ft_strcmp.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstnew.c \
		ft_memcpy.c \
		ft_strsplit.c \
		ft_strdup.c

LIBA_FILES = $(addprefix $(LIBFT_DIR), $(L_SRC))
LIBA_OBJ = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.o, $(L_SRC)))
D_FILES_LIBA = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.d, $(L_SRC)))

COREWAR_FILES = $(C_FILES) $(LIBA_FILES)
COREWAR_OBJ = $(C_OBJ) $(LIBA_OBJ)
D_FILES = $(D_FILES_LEM) \& $(D_FILES_LIBA)
.PHONY: all clean fclean re

all: $(COREWAR_NAME)

$(COREWAR_NAME): $(COREWAR_OBJ)
	@$(CC) $(COREWAR_OBJ) -I $(COREWAR_HEADER) -o $(COREWAR_NAME)
	@echo $(GREEN)$(COREWAR_NAME) -\> Build done!$(RESET)

$(COREWAR_DIR)%.o: $(COREWAR_DIR)%.c
	@$(CC) $(FLAGS) -I $(COREWAR_HEADER) -MD -c $< -o $@
	@echo $(CYAN)Compiling... $<$(RESET)

$(LIBFT_DIR)%.o: $(LIBFT_DIR)%.c
	@$(CC) $(FLAGS) -I $(LIBFT_DIR) -MD -c $< -o $@
	@echo $(CYAN)Compiling... $<$(RESET)

clean:
	@rm -rf $(COREWAR_OBJ) $(D_FILES)
	@echo $(RED)Object files was deleted$(RESET)

fclean: clean
	@rm -rf $(COREWAR_NAME) $(D_FILES)
	@echo $(RED)$(COREWAR_NAME) was deleted$(RESET)

include $(wildcard $(D_FILES))

re: fclean all

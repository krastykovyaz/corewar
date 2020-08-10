# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/31 22:43:12 by lnoisome          #+#    #+#              #
#    Updated: 2020/08/10 19:45:24 by lnoisome         ###   ########.fr        #
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
		init_data.c \
		ft_calloc.c \
		ft_error.c \
		init_vm.c \
		parsing.c \
		valid_dump.c \
		valid_n.c \
		valid_id_name.c \
		pars_champ.c \
		check_m_h.c \
		bit_shift.c \
		valid_champ_name.c \
		valid_exec_size.c \
		check_comment.c \
		valid_ex_code.c \
		finish_players.c \
		init_carry.c \
		ft_lstnew.c \
		ft_lstadd.c \
		print_start.c \
		free_data.c

C_FILES = $(addprefix $(COREWAR_DIR), $(C_SRC))
C_OBJ = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.o, $(C_SRC)))
D_FILES_CW = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.d, $(C_SRC)))

LIBFT_DIR = ./libft_src/

L_SRC = ft_strlen.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strequ.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_swap.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_putstr.c

LIBA_FILES = $(addprefix $(LIBFT_DIR), $(L_SRC))
LIBA_OBJ = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.o, $(L_SRC)))
D_FILES_LIBA = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.d, $(L_SRC)))

COREWAR_FILES = $(C_FILES) $(LIBA_FILES)
COREWAR_OBJ = $(C_OBJ) $(LIBA_OBJ)
D_FILES = $(D_FILES_LEM) \& $(D_FILES_LIBA)
# COREWAR_FILES = $(C_FILES)
# COREWAR_OBJ = $(C_OBJ)
# D_FILES = $(D_FILES_CW)
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

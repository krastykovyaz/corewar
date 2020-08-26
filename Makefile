# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/31 22:43:12 by lnoisome          #+#    #+#              #
#    Updated: 2020/08/26 13:59:55 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COREWAR_NAME = corewar

RED = "\033[1;31m"
GREEN = "\033[1;32m"
RESET = "\033[0;0m"
CYAN = "\033[1;35m"

CC = gcc
FLAGS = -Wall -Wextra -Werror
# FLAGS = -g


COREWAR_DIR = ./corewar_src/
COREWAR_HEADER = ./includes/

C_SRC = main.c \
		init_data.c \
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
		set_players.c \
		init_carry.c \
		ft_lstnew.c \
		ft_lstadd.c \
		print_start.c \
		free_data.c \
		game.c \
		check_live.c \
		check_carry.c \
		end_dump.c \
		del_fun.c \
		conclusion.c

C_FILES = $(addprefix $(COREWAR_DIR), $(C_SRC))
C_OBJ = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.o, $(C_SRC)))
D_FILES_CW = $(addprefix $(COREWAR_DIR), $(patsubst %.c, %.d, $(C_SRC)))

OPER_DIR = ./oper_src/

O_SRC = set_oper.c \
		oper_func.c \
		o_live.c \
		read_4_bytes.c \
		o_ld.c \
		read_2_bytes.c \
		get_set_pos.c \
		check_arg.c \
		def_arg.c \
		relocate.c \
		read_1_byte.c \
		o_st.c \
		check_reg.c \
		o_add.c \
		plus_minus.c \
		o_sub.c \
		o_and.c \
		write_to_reg.c \
		get_arg_dir.c \
		o_or.c \
		o_xor.c \
		o_zjmp.c \
		o_ldi.c \
		valid_args.c \
		get_arg.c \
		o_sti.c \
		get_third.c \
		o_fork.c \
		carret.c \
		o_lldi.c \
		o_lld.c \
		o_lfork.c \
		o_aff.c

O_FILES = $(addprefix $(O_DIR), $(O_SRC))
O_OBJ = $(addprefix $(OPER_DIR), $(patsubst %.c, %.o, $(O_SRC)))
D_FILES_OPER = $(addprefix $(OPER_DIR), $(patsubst %.c, %.d, $(O_SRC)))

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
		ft_putstr.c \
		print_memory.c \
		del_end.c \
		del_start.c \
		del_midl.c \
		ft_calloc.c 

LIBA_FILES = $(addprefix $(LIBFT_DIR), $(L_SRC))
LIBA_OBJ = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.o, $(L_SRC)))
D_FILES_LIBA = $(addprefix $(LIBFT_DIR), $(patsubst %.c, %.d, $(L_SRC)))

COREWAR_FILES = $(C_FILES) $(LIBA_FILES) $(O_FILES)
COREWAR_OBJ = $(C_OBJ) $(LIBA_OBJ) $(O_OBJ)
D_FILES = $(D_FILES_LEM) \& $(D_FILES_LIBA) \& $(D_FILES_OPER)
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

$(OPER_DIR)%.o: $(OPER_DIR)%.c
	@$(CC) $(FLAGS) -I $(OPER_DIR) -MD -c $< -o $@
	@echo $(CYAN)Compiling... $<$(RESET)

clean:
	@rm -rf $(COREWAR_OBJ) $(D_FILES)
	@echo $(RED)Object files was deleted$(RESET)

fclean: clean
	@rm -rf $(COREWAR_NAME) $(D_FILES)
	@echo $(RED)$(COREWAR_NAME) was deleted$(RESET)

include $(wildcard $(D_FILES))

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 08:52:38 by mfinette          #+#    #+#              #
#    Updated: 2022/11/13 16:46:22 by mfinette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIBFT	= libft
AR		= ar rcs
RM		= @rm -f
NORM	= norminette -R CheckDefine
HEADER	= ft_printf.h
DEF_COLOR = \033[0;39m
YELLOW = \033[0;93m
GREEN = \033[0;92m
BLUE = \033[0;94m
CYAN = \033[0;96m

FILES = formats/ft_format_c 		\
		formats/ft_format_d 		\
		formats/ft_format_s 		\
		formats/ft_format_p 		\
		formats/ft_format_u			\
		formats/ft_format_x_min		\
		formats/ft_format_x_maj		\
		tools/ft_print_tools		\
		tools/ft_print_hex_tools	\
		tools/ft_itoa				\
		tools/ft_strlen				\
		tools/ft_uitoa				\
		tools/ft_calloc				\
		tools/ft_bzero				\
		ft_printf					\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

%.o:%.c $(HEADER) Makefile
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $@ $^	
	@echo "$(GREEN)😳😎ft_printf compiled!😎😳$(DEF_COLOR)"
	
all: $(NAME)
		

clean:
	@$(RM) $(OBJS)
	@echo "$(CYAN)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)3$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)2$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)1$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(GREEN)ft_printf executable files cleaned!$(DEF_COLOR)"


re: clean all

.PHONY: all clean fclean re norm

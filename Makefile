# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 08:52:38 by mfinette          #+#    #+#              #
#    Updated: 2022/11/16 15:49:01 by mfinette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIBFT	= libft
AR		= ar rcs
RM		= rm -f
NORM	= norminette -R CheckDefine
HEADER	= ft_printf.h

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
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^	
	
all: $(NAME)
		

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re norm

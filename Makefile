# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: destrada <destrada@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 17:12:02 by destrada          #+#    #+#              #
#    Updated: 2022/11/15 09:59:42 by destrada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		printf_len_utils.c \
		printf_prints_utils.c

OBJS = $(SRCS:.c=.o)

AR = ar -rcs

LIB_DIR = libft/

LIBFT = libft/libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIB_DIR)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
	@make clean -C $(LIB_DIR)

fclean: clean
		$(RM) $(NAME) 
		$(RM) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

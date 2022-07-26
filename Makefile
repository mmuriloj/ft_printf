# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 04:32:17 by mumontei          #+#    #+#              #
#    Updated: 2022/07/26 19:03:44 by mumontei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COMPILER = gcc
CFLAGS = -Wall -Werror -Wextra -c
HEADER = ft_printf.h
SRCS = ft_printf.c ft_print_num.c ft_print_ptr.c \
		ft_print_hex.c
OBJS =	 $(SRCS:.c=.o)

all: $(NAME)

teste: re all
	@clear
	@rm -rf ft_printf
	@gcc main.c libftprintf.a -o ft_printf
	@./ft_printf

make z: fclean
	@rm -rf ft_printf

$(NAME):	 $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all
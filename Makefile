# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shafsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 19:08:42 by shafsi            #+#    #+#              #
#    Updated: 2022/01/20 19:09:11 by shafsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS =	ft_print_char.c ft_print_nbr.c ft_print_unbr.c ft_print_adr.c ft_print_hexa.c ft_print_str.c ft_printf.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJS)
	ar -cr $(NAME) $(OBJS) 

%.o:%.c ft_printf.h
	cc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re: fclean all

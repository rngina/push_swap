# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 15:51:42 by rtavabil          #+#    #+#              #
#    Updated: 2024/01/08 14:08:09 by rtavabil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

SRC := ft_atol.c ft_calloc.c ft_lst.c ft_printf.c ft_split.c \
       input.c main.c push.c swap.c rotate.c \
	   is_sorted.c reverse_rotate.c error.c set_values.c \
	   set_values_2.c sort_3.c set_values_3.c algorithm.c
OBJ := $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

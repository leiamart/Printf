# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 19:28:37 by leiamart          #+#    #+#              #
#    Updated: 2024/06/03 19:05:37 by leiamart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

SOURCES = \
ft_printf.c\
ft_putnbr.c\
ft_putstr.c\
ft_putchar.c\
ft_puthex.c\
ft_putptr.c\
ft_putunsigned.c\

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 19:28:37 by leiamart          #+#    #+#              #
#    Updated: 2024/05/27 21:16:38 by leiamart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c\
ft_putnbr.c\
ft_putstr.c\
ft_putchar.c\
ft_puthex.c\
ft_putptr.c\
ft_putunsigned.c\


OBJECTS = $(SOURCES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re

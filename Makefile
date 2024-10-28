# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 14:49:20 by pvitor-l          #+#    #+#              #
#    Updated: 2024/10/28 15:01:25 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

FILE = ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_memmove.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c

OBJS = $(FILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean

	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

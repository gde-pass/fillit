# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-pass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:44:30 by gde-pass          #+#    #+#              #
#*   Updated: 2017/11/21 21:15:31 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADERS = libft.h
SRCS = ft_putchar.c \
	   ft_strlen.c \
	   ft_putstr.c \
	   ft_swap.c \
	   ft_strcmp.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strcat.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_atoi.c \
	   ft_isspace.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlcat.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strsplit.c \
	   ft_strtrim.c \
	   ft_itoa.c \
	   ft_strrev.c \
	   ft_intlength.c \
	   ft_memcpy_rev.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c

SRC = $(SRCS)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I $(HEADERS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/18 15:03:59 by myrhamza          #+#    #+#              #
#    Updated: 2026/11/18 15:15:15 by myrhamza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 
SOURCES = ft_atoi.c ft_isprint.c ft_lstlast.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
ft_bzero.c ft_itoa.c ft_lstmap.c ft_memset.c ft_strdup.c ft_strncmp.c libft.h ft_calloc.c ft_lstadd_back.c \
ft_lstnew.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_isacii.c ft_lstadd_front.c ft_lstsize.c \
ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalnum.c ft_lstclear.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c \
ft_strtrim.c ft_isalpha.c ft_lstdelone.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
ft_isdigit.c ft_lstiter.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c
OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re


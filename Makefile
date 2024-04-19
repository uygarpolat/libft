# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 20:59:00 by upolat            #+#    #+#              #
#    Updated: 2024/04/19 16:40:38 by upolat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ./ft_atoi.c \
		  ./ft_putstr_fd.c \
		  ./ft_strrchr.c \
		  ./ft_bzero.c \
		  ./ft_split.c \
		  ./ft_strtrim.c \
		  ./ft_calloc.c \
		  ./ft_strchr.c \
		  ./ft_substr.c \
		  ./ft_isalnum.c \
		  ./ft_memchr.c \
		  ./ft_strdup.c \
		  ./ft_tolower.c \
		  ./ft_isalpha.c \
		  ./ft_memcmp.c \
		  ./ft_calloc.c \
		  ./ft_striteri.c \
		  ./ft_toupper.c \
		  ./ft_isascii.c \
		  ./ft_memcpy.c \
		  ./ft_strjoin.c \
		  ./ft_isdigit.c \
		  ./ft_memmove.c \
		  ./ft_strlcpy.c \
		  ./ft_strlcat.c \
		  ./ft_isprint.c \
		  ./ft_memset.c \
		  ./ft_strlen.c \
		  ./ft_itoa.c \
		  ./ft_putchar_fd.c \
		  ./ft_strmapi.c \
		  ./ft_putendl_fd.c \
		  ./ft_strncmp.c \
		  ./ft_putnbr_fd.c \
		  ./ft_strnstr.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS = ./ft_lstnew_bonus.c \
		./ft_lstadd_front_bonus.c \
		./ft_lstsize_bonus.c \
		./ft_lstlast_bonus.c \
		./ft_lstadd_back_bonus.c \
		./ft_lstdelone_bonus.c \
		./ft_lstclear_bonus.c \
		./ft_lstiter_bonus.c \
		./ft_lstmap_bonus.c \

BONUS_OBJS =  $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	cc $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

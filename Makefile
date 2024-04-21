# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 21:35:28 by upolat            #+#    #+#              #
#    Updated: 2024/04/21 22:42:03 by upolat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= rm -f

NAME	= libft.a

SRCS =	./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_isprint.c \
		./ft_strlen.c \
		./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_strlcpy.c \
		./ft_strlcat.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strncmp.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_strnstr.c \
		./ft_atoi.c \
		./ft_calloc.c \
		./ft_strdup.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_split.c \
		./ft_itoa.c \
		./ft_strmapi.c \
		./ft_striteri.c \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \

OBJS	= $(SRCS:.c=.o)

BONUS_S =	./ft_lstnew_bonus.c \
			./ft_lstadd_front_bonus.c \
			./ft_lstsize_bonus.c \
			./ft_lstlast_bonus.c \
			./ft_lstadd_back_bonus.c \
			./ft_lstdelone_bonus.c \
			./ft_lstclear_bonus.c \
			./ft_lstiter_bonus.c \
			./ft_lstmap_bonus.c \

BONUS_O	= $(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:		$(BONUS_O) $(INCLUDE)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/02 18:07:37 by nkreter           #+#    #+#              #
#    Updated: 2026/10/12 14:49:47 by nkreter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	print_c.c \
		print_s.c \
		print_u.c \
		print_di.c \
		print_hex.c \
		printf.c \
		print_prct.c \
		print_p.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CC			=		cc
RM			=		rm -f
CFLAGS		=		-Wall -Wextra -Werror

NAME:	$(OBJ)
			ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
					$(RM) $(OBJ)
					
fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
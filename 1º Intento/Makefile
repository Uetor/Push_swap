# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedro <pedro@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 02:36:59 by pedrogon          #+#    #+#              #
#    Updated: 2023/09/04 03:30:25 by pedro            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Push_swap 
SRC			= main.c print.c moves.c push.c check.c

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
LIBFT_PATH 	= ./Libft
OBJS		= $(SRC:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	make -C $(LIBFT_PATH)
	$(CC) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)

clean :
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean :
	make -C $(LIBFT_PATH) fclean
	$(RM) $(OBJS) $(NAME)

re : fclean all
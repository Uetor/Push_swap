# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 19:25:00 by pedrogon          #+#    #+#              #
#    Updated: 2023/12/21 19:25:03 by pedrogon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap
SRC 		= main.c reserve_memory.c check.c movements.c movements_2.c \
				movements_3.c order_number.c

CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra
RM 			= rm -f
LIBFT_PATH 	= ./libft
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


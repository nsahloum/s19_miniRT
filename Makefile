# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/20 00:19:12 by nsahloum          #+#    #+#              #
#    Updated: 2021/03/20 00:29:35 by nsahloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =			gcc 

FLAGS =			-Wall -Wextra -Werror 

LDFLAGS = 		-L ./lib/libft -lft -L ./lib/minilibx_opengl -lmlx -framework OpenGL -framework AppKit
RM =			rm -rf

DIR_HEADERS =	./includes/

DIR_SRCS =		./srcs/

DIR_OBJS =		./

SRCS =			$(addprefix $(DIR_SRCS), $(SRC))

SRC =			main.c

COMPIL =		$(FLAGS)

OBJS =			$(SRCS:.c=.o)

NAME =			miniRT

all:			$(NAME)

$(NAME) :		$(OBJS)
				@make -C ./lib/minilibx_opengl
				@make -C ./lib/libft
				$(CC) $(COMPIL) $(LDFLAGS) -I $(DIR_HEADERS) $(OBJS) -o $(NAME)

%.o: %.c
				@gcc $(FLAGS) -I $(DIR_HEADERS) -c $< -o $@
				@echo "Compiled "$<" successfully!"

norme:
				norminette $(DIR_SRCS)
				norminette $(DIR_HEADERS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				@make clean -C ./lib/minilibx_opengl
				@make fclean -C ./lib/libft
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re
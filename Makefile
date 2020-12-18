# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/22 19:34:36 by nsahloum          #+#    #+#              #
#    Updated: 2020/12/18 01:55:11 by nsahloum         ###   ########.fr        #
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

SRC =			minirt.c utils.c sphere.c \
				get_next_line.c \
				get_next_line_utils.c \
				ambiance.c \

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
				#@make clean -C ./minilibx_mms
				@make clean -C ./lib/minilibx_opengl
				@make clean -C ./lib/libft
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re
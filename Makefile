# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/22 19:34:36 by nsahloum          #+#    #+#              #
#    Updated: 2020/12/11 00:38:49 by nsahloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC =			gcc 

FLAGS =			-Wall -Wextra -Werror 

LDFLAGS = 		-L . -lmlx -framework OpenGL -framework AppKit
RM =			rm -rf

DIR_HEADERS =	./includes/

DIR_SRCS =		./srcs/

DIR_OBJS =		./

SRC =			minirt.c utils.c sphere.c \
				get_next_line.c \
				get_next_line_utils.c \

SRCS =			$(addprefix $(DIR_SRCS), $(SRC))

COMPIL =		$(FLAGS)

OBJS =			$(SRCS:.c=.o)

NAME =			miniRT

all:			$(NAME)

$(NAME) :		$(OBJS)
				#@make -C ./minilibx_mms
				@make -C ./lib/minilibx_opengl
				mv ./lib/minilibx_opengl/libmlx.a .
				#@cp ./minilibx_mms/libmlx.dylib libmlx.dylib
				#@cp ./minilibx_opengl/libmlx.a libmlx.a
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
				$(RM) libmlx.dylib
				$(RM) libmlx.a
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re
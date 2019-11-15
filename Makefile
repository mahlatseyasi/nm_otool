# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 12:37:43 by mkhoza            #+#    #+#              #
#    Updated: 2019/09/09 10:09:07 by mkhoza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_NM = ft_nm
NAME_OTOOL = ft_otool

SRC_NM = nm_archive.c \
		 nm_fat32.c \
		 nm_fat64.c \
		 ft_nm.c \
		 nm_ft_utils.c \
		 nm_macho32.c \
		 nm_macho64.c \
		 nm_ppc.c \
		 nm_sections.c \
		 nm_utils.c
SRC_OTOOL = otool_archive.c \
			otool_fat32.c \
			otool_fat64.c \
			ft_otool.c \
			otool_ft_utils.c \
			otool_macho32.c \
			otool_macho64.c \
			otool_ppc.c \
			otool_utils.c

OBJ_NM = $(SRC_NM:.c=.o)
OBJ_OTOOL = $(SRC_OTOOL:.c=.o)
	
FLAGS = -Wall -Wextra -Werror

all: $(NAME_NM) $(NAME_OTOOL)

$(NAME_NM):
	make -C libft/
	gcc $(FLAGS) -c $(SRC_NM)
	gcc -o $(NAME_NM) $(OBJ_NM) -L ./libft/ -lft

$(NAME_OTOOL):
	gcc $(FLAGS) -c $(SRC_OTOOL)
	gcc -o $(NAME_OTOOL) $(OBJ_OTOOL) -L ./libft/ -lft

%.o:	%.c
		gcc $(FLAGS) -c $^ -o $@

clean:	libclean
	rm -f $(OBJ_NM)
	rm -f $(OBJ_OTOOL)

libclean:
	make -C libft/ clean

libftclean:
	make -C libft/ fclean

fclean: clean libftclean
	rm -f $(NAME_NM)
	rm -f $(NAME_OTOOL)

re: fclean all

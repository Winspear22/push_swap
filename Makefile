# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 13:39:14 by adaloui           #+#    #+#              #
#    Updated: 2021/11/08 17:15:24 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_OS = $(shell uname)

ifeq ($(NAME_OS), Darwin)
	SRC = srcs/main.c srcs/ft_check_arguments.c srcs/ft_sort_cmd.c srcs/ft_sort_cmd_2.c srcs/ft_sort_cmd_3.c \
	srcs/ft_check_arguments_2.c srcs/ft_init_stacks.c srcs/ft_sort_len_5.c srcs/ft_free_cmd.c srcs/ft_sort_len_10_more.c srcs/ft_support_len_10_more.c srcs/ft_support_len_10_more_2.c srcs/ft_support_len_10_more_3.c srcs/ft_support_len_10_more_4.c srcs/ft_support_len_5.c
NAME_OS = MAC
endif
ifeq ($(NAME_OS), Linux)
	SRC = srcs/ft_free_cmd.c srcs/main.c srcs/ft_check_arguments.c srcs/ft_sort_cmd.c srcs/ft_sort_cmd_2.c srcs/ft_sort_cmd_3.c  \
	srcs/ft_check_arguments_2.c srcs/ft_init_stacks.c srcs/ft_sort_len_5.c libft/ft_atoi.c libft/ft_putstr_fd.c \
	libft/ft_isdigit.c libft/ft_putchar_fd.c srcs/ft_sort_len_10_more.c srcs/ft_support_len_10_more.c srcs/ft_support_len_10_more_2.c \
	srcs/ft_support_len_10_more_3.c srcs/ft_support_len_10_more_4.c srcs/ft_support_len_5.c

endif

OBJ = *.o

FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

LIBFT_A = libft.a
LIBFT_DOSSIER = libft/
LIBFT  = $(addprefix $(LIBFT_DOSSIER), $(LIBFT_A))

WHITE ='\033[0m'
BLUE ='\033[36m'
CYAN ='\033[1;32m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CYAN) "Compilation en cours de $(NAME) sur l'OS \"$(NAME_OS)\"" $(WHITE)
	@make -C $(LIBFT_DOSSIER)
	@gcc $(FLAGS) $(LIBFT) $(OBJ) -o $(NAME)
	@mv $(OBJ) srcs
	@echo ""
	@echo $(BLUE)"Tout a été compilé avec succès ! -"$(WHITE)

$(OBJ): $(SRC)
	@echo $(CYAN) "Creation des fichiers .o." $(WHITE)
	@gcc $(FALGS) -c $(SRC)

clean:
	@echo "Suppression en cours des fichiers .o de pipex et de la libft"
	@echo $(CYAN) "Suppression des fichiers .o de pipex." $(WHITE)
	@echo $(CYAN) "Suppression des fichiers .o de la libft." $(WHITE)
	@make -C $(LIBFT_DOSSIER) clean
	@echo "Nettoyage des fichiers .o effectué"

fclean: clean
	@echo $(CYAN) "Suppression du logiciel $(NAME)." $(WHITE)
	@rm -rf $(NAME)
	@make -C $(LIBFT_DOSSIER) fclean
	@echo "Tout a été supprimé !"

re: fclean all

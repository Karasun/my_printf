##
## EPITECH PROJECT, 2018
## PSU_my_printf_2018
## File description:
## __DESCRIPTION__
##

SRC_DIR	=	$(realpath ./lib/my)

SRC  	= 	$(SRC_DIR)/my_printf.c\
		$(SRC_DIR)/first_fonction.c\
		$(SRC_DIR)/secon_fonction.c\
		$(SRC_DIR)/first_display.c\
		$(SRC_DIR)/secon_display.c

CFLAGS	=	-Wall -Wextra -I./include/

OBJ	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.gcno

fclean:		clean
	rm -f $(NAME)

re : 	fclean all

auteur :
	echo $(USER) > auteur

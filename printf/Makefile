CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)
NAME = printf.a

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	@echo "Creation de la librairie $(NAME)"
	@ar rcs $(NAME) $(OBJ)

# Command #

clean :
	@echo "Suppression des objets $(NAME)"
	@rm -f $(OBJ)

fclean : clean
	@echo "Suppression de la librairie $(NAME)"
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

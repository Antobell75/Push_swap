CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 

SRC = srcs/push.c \
		srcs/rotate.c \
		srcs/swap.c \
		main.c \
		srcs/ft_lst.c \
		srcs/reverse_rotate.c \
		srcs/ft_libft.c \
		srcs/check_error.c \
		srcs/mini_algo.c \
		srcs/big_algo.c \
		srcs/big_algo_utils.c \
		srcs/init.c

OBJ = $(SRC:%.c=$(OBJDIR)/%.o)

OBJDIR = obj

PRINTF = printf/printf.a

INCLUDES = -I. -Iftprintf

NAME = push_swap

$(NAME): $(OBJ) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(NAME)
	@echo "Creation de push_swap"

$(OBJDIR)/%.o : %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDES)

$(PRINTF):
	@$(MAKE) -s -C printf

# Command #

all: $(NAME)

clean:
	@echo "Suppression des objets $(NAME)"
	@rm -rf $(OBJ)
	@$(MAKE) -s -C printf clean

fclean: clean
	@echo "Suppression de $(NAME)"
	@rm -rf $(NAME)
	@$(MAKE) -s -C printf fclean

re: fclean all

.PHONY: all clean fclean re
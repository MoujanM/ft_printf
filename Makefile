
NAME = libftprintf.a

SRC = ft_print_s.c \
	ft_print_c.c \
	ft_print_d.c \
	ft_printf_utils.c \
	ft_printf.c

HEADER = ft_printf.h 

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT_A = $(LIBFT_DIR)/libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_A)
	cp $(LIBFT_A) $(NAME)
	ar rs $(NAME) $(OBJ)

$(LIBFT_A):
	@make -C $(LIBFT_DIR)

$(OBJ): %.o: %.c $(HEADER)
	cc $(FLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

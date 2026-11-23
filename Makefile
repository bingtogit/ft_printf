NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_address_to_hexa.c ft_printf.c ft_putchar.c \
	ft_putnbr.c ft_putstr.c ft_putunsigned.c \
	ft_x_number_to_hexa.c ft_X_number_to_hexa.c\

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)
	
fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME := libft.a
SRCS := srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS := ${SRCS:.c=.o}
I_DIR := includes
CC := cc
C_FLAGS := -Wall -Wextra -Werror
%.o: %.c
	$(CC) $(C_FLAGS) -I $(I_DIR) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

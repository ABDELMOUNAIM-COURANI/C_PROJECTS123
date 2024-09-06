
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
srcsdir = srcs
includesdir = includes
SRC = $(srcsdir)/ft_putchar.c $(srcsdir)/ft_putstr.c $(srcsdir)/ft_strcmp.c $(srcsdir)/ft_strlen.c $(srcsdir)/ft_swap.c
OBJ = $(SRC:.c=.o)	
NAME = libft.a

all: $(NAME)

%.o:%.c
	
	$(CC) $(CCFLAGS) -I $(includesdir) -c $< -o  $@


$(NAME): $(OBJ)
	
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: 

	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o

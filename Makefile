NAME = libft

SRC = *.c ./added/*.c ./ft_printf/*.c ./lst/*.c ./pile/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) && ar rc libft.a $(OBJ) && ranlib libft.a

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re:	fclean all

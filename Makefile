NAME = libft.a

SRC = *.c ./added/*.c ./ft_printf/*.c ./lst/*.c ./pile/*.c ./get_next_line/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) && ar rc $(NAME) $(OBJ) && ranlib &(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re:	fclean all

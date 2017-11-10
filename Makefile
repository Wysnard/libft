NAME = libft.a

SRC = *.c ./added/*.c ./lst/*.c ./pile/*.c ./btree/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) && ar rc $(NAME) $(OBJ) && ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME) *.o

re:	fclean all

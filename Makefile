NAME = libft.a

SRC = *.c ./added/*.c ./ft_printf/*.c ./lst/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) && ar rc $(NAME) $(OBJ) && ranlib libft.a

do:
	gcc $(SRC) ./main/main.c -L. -lft

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re:	fclean all

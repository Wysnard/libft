NAME = get_next_line

SRC = *.c

all: $(NAME)

$(NAME):
	gcc $(SRC) -L. -lft

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re:	fclean all

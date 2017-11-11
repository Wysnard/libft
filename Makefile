NAME = libft.a

ADDDIR = ./added/

ADDFILE = ft_atoim.c ft_convert_base.c \
			ft_dtoa.c ft_intlen.c\
			ft_power.c ft_print_bits.c \
			ft_putwchar_fd.c ft_putwchar.c \
			ft_putwstr_fd.c ft_putwstr.c \
			ft_strndup.c ft_strrev.c \
			ft_strtrijoin.c ft_swap.c \
			ft_utoa.c

ADD =  $(addprefix $(ADDDIR),$(ADDFILE))

LSTDIR = ./lst/

LSTFILE = ft_lstadd.c ft_lstdel.c \
			ft_lstdelall.c ft_lstdelone.c \
			ft_lstfrontbacksplit.c ft_lstiter.c \
			ft_lstlen.c ft_lstmap.c \
			ft_lstnew.c ft_lstpushadd.c \
			ft_lstrev.c ft_lstrotate.c \
			ft_lsttoa.c

LST =  $(addprefix $(LSTDIR),$(LSTFILE))

PILEDIR = ./pile/

PILEFILE = ft_pileadd.c ft_piledel.c \
			ft_pileinit.c ft_pilepushadd.c

PILE = $(addprefix $(PILEDIR),$(PILEFILE))

BTREEDIR = ./btree/

BTREEFILE = ft_btree_apply_infix.c ft_btree_apply_prefix.c \
			ft_btree_apply_suffix.c ft_btree_rev_infix.c \
			ft_btreecreate.c ft_btreedel.c \
			ft_btreeinsert.c ft_btreejoin.c \
			ft_btreelvlct.c ft_btreesearch.c

BTREE = $(addprefix $(BTREEDIR),$(BTREEFILE))

SRCFILE = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_islower.c ft_isupper.c \
		ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c \
		ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
		ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c \
		ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
		ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
		ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
		ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
		ft_tolower.c ft_toupper.c \

SRC = $(SRCFILE) $(ADD) $(LST) $(PILE) $(BTREE)

OBJ = $(SRCFILE:.c=.o) $(ADDFILE:.c=.o) $(LSTFILE:.c=.o) $(PILEFILE:.c=.o) $(BTREEFILE:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror && ar rc $(NAME) $(OBJ) && ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME) $(OBJ)

re:	fclean all

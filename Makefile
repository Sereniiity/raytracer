NAME	=	id_rt
SRCS	=	main.c		\
		engine.c

OBJS	=	$(SRCS:.c=.o)
CFLAGS	=	 -Wall -W -Werror `sdl-config --cflags`
LDFLAGS	=	`sdl-config --libs`

all:	$(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS)

distclean:	clean
	rm -f $(NAME)

rebuild:	distclean all


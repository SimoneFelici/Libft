NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

CFILES	=  

OBJS	= $(CFILES:%=%.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

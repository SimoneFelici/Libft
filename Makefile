NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

CFILES	=	ft_isalpha.c \
		 	ft_strlen.c

OBJS	= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

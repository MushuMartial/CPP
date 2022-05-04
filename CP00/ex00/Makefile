NAME =	megaphone
SRCS =	megaphone.cpp

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
rm = rm -rf

all : $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re bonus clean fclean all

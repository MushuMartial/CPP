NAME =	ClapTrap
SRCS =	main.cpp ClapTrap.cpp

OBJ = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
rm = rm -rf

all : $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re bonus clean fclean all
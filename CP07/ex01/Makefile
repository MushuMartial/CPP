NAME =	Iter
SRCS =	main.cpp

OBJ = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
CXX = c++
rm = rm -rf

all : $(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re bonus clean fclean all
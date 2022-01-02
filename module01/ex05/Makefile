NAME = karen

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

INC = karen.hpp
OBJ = karen.o main.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


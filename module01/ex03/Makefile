NAME = weapon

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

INC = weapon.hpp humanA.hpp humanB.hpp
OBJ = weapon.o humanA.o humanB.o main.o

all: $(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ):$(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
NAME = poly

FLAGS = -Wall -Wextra -Werror

SCRS = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp

INC = Animal.hpp Brain.hpp Cat.hpp Dog.hpp
OBJ = $(SCRS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) $^ -o $@
%.o:%.cpp $(INC)
	clang++ $(FLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
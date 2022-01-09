NAME = serena

FLAGS = -Wall -Wextra -Werror

SCRS = ScavTrap.cpp ClapTrap.cpp main.cpp

INC = ClapTrap.hpp
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
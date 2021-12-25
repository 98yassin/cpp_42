NAME = BraiiiiiiinnnzzzZ

FLAGS = -Wall -Wextra -Werror

SCRS = zombie.cpp newzombie.cpp randomchump.cpp main.cpp

INC = zombie.hpp
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
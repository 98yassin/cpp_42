NAME = convert

FLAGS = -Wall -Wextra -Werror

SCRS =  Convert.cpp main.cpp

INC =  Convert.hpp
OBJ = $(SCRS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) $^ -o $@
%.o:%.cpp $(INC)
	clang++ $(FLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) *_shrubbery
re: fclean $(NAME)
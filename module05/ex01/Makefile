NAME = Form

FLAGS = -Wall -Wextra -Werror

SCRS = Form.cpp Bureaucrat.cpp main.cpp

INC =  Bureaucrat.hpp Form.hpp
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
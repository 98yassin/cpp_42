NAME = Form

FLAGS = -Wall -Wextra -Werror

SCRS = Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp main.cpp

INC =  Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
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
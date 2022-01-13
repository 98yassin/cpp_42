NAME = materia

FLAGS = -Wall -Wextra -Werror

SCRS = AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main.cpp

INC = AMateria.hpp Character.hpp Ice.hpp Cure.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
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
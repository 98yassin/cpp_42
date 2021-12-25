NAME = phonebook

CFLAGS = -Wall -Wextra -Werror

SRC = contact.cpp phonebook.cpp

INC = contact.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) $^ -o $@

%.o:%.cpp $(INC)
	clang++ $(FLAGS) -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
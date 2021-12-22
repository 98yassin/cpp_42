NAME = phonebook

CFLAGS = -Wall -Wextra -Werror

SRC = contact.cpp phonebook.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) $^ -o $@

%.o:%.cpp
	clang++ $(FLAGS) -c $^

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
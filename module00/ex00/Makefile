NAME = megaphone

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

all: $(NAME)

$(NAME) :
	clang++ $(FLAGS) $(SRC) -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
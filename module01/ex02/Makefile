NAME = brain

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $@

fclean:
	rm -f $(NAME)
re: fclean $(NAME)
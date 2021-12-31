NAME = replace

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.o
	clang++ $(FLAGS) $^ -o $@

main.o : main.cpp
	clang++ $(FLAGS) -c $^ -o $@

clean:
	rm -f main.o
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
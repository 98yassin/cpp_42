NAME = megaphone

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : megaphone.o
	clang++ $(FLAGS) $^ -o $@

megaphone.o:megaphone.cpp
	clang++ $(FLAGS) -c $^ -o $@

clean:
	rm -f megaphone.o
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
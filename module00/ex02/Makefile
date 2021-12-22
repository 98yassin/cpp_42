NAME = account

FLAGS = -Wall -Wextra -Werror

SCRS = account.cpp tests.cpp

OBJ = $(SCRS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	clang++ $(FLAGS) $^ -o $@
%.o:%.cpp
	clang++ $(FLAGS) -c $^

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re: fclean $(NAME)
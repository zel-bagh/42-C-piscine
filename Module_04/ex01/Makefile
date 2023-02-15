NAME = Animal

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all : $(NAME)

$(NAME):$(SRC)
	c++ -Wall -Wextra -Werror --std=c++98 $(SRC) -o Animal
clean:
	rm -rf Animal
fclean:
	rm -rf Animal
re: fclean all

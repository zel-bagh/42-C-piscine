NAME = program

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

all : $(NAME)

$(NAME):$(SRC)
	c++ -Wall -Wextra -Werror --std=c++98 $(SRC) -o program
clean:
	rm -rf program
fclean:
	rm -rf program
re: fclean all

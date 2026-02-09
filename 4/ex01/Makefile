NAME = animals

COMP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -I ./

SRC =	main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	Brain.cpp \

OBJS = ${SRC:.cpp=.o}

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

${NAME}: ${OBJS}
	$(COMP) ${OBJS} ${FLAGS} -o $(NAME)

all: ${NAME}

clean:
	rm -f ${OBJS} 

fclean: clean;
	rm -f ${NAME}

re: fclean all
		
.PHONY: all, clean, fclean, re

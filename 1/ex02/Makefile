NAME = brain

COMP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -I ./

SRC =	main.cpp \

OBJS = ${SRC:.cpp=.o}

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

${NAME}: ${OBJS}
	$(COMP) ${OBJS} ${FLAGS} -o $(NAME)

all: ${NAME}

clean:
	rm -f ${OBJS} 

fclean: clean;
	rm -f brain

re: fclean all
		
.PHONY: all, clean, fclean, re

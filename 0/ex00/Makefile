OBJS	= megaphone.o
SOURCE	= megaphone.cpp
HEADER	= 
OUT	= megaphone
FLAGS	= -g -c -Wall -Wextra -Werror
LFLAGS	= 
CC	= c++

all:	megaphone

megaphone: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

megaphone.o: megaphone.cpp
	$(CC) $(FLAGS) megaphone.cpp

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(OUT)

re: fclean all

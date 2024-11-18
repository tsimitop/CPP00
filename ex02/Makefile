NAME = executable

CC = c++

CFLAGS = -std=c++98 -Wall -Werror -Wextra

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o:%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

superclean : fclean
	rm -f *.txt

re : fclean all

.PHONY: all clean fclean re superclean
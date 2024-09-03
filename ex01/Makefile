NAME = annoying_phonebook

CC = c++

CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp phonebook.cpp contact.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : %.cpp
	@$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
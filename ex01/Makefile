NAME = annoying_phonebook

CC = c++

CFLAGS = -std=c++11 -Wall -Werror -Wextra #-fsanitize=address

SRCS = main.cpp PhoneBook.cpp Contact.cpp

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

.PHONY: all clean fclean re
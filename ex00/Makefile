NAME = megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	c++ -Wall -Werror -Wextra megaphone.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
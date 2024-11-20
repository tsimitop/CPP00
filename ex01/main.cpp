#include "PhoneBook.hpp"

void	present_programm()
{
	std::cout << "\nThis is a very very annoying phonebook.\n\n\n";
	std::cout << "You have thee available options:\n";
	std::cout << "    ADD: Add a new contact\n";
	std::cout << "    SEARCH: Search for existing contacts\n";
	std::cout << "    EXIT: Exit the phonebook and LOOSE ALL YOUR CONTACTS!\n\n";
}

int main(void)
{
	PhoneBook		book;
	std::string		user_input;
	int				max = 0;
	int				id = 0;

	present_programm();
	std::cout << "What option would you like? ADD, SEARCH or EXIT?\n";
	std::getline(std::cin, user_input);
	while (user_input != "EXIT")
	{
		if (std::cin.eof())
			break;
		if (user_input == "ADD")
		{
			book.addContact(id % 8);
			id++;
		}
		else if (user_input == "SEARCH")
			book.displayContacts(book, max);
		else
			std::cout << "The only valid options are: ADD, SEARCH, EXIT. Please type a valid option.\n\n";
		std::cout << "What option would you like? ADD, SEARCH or EXIT?\n";
		std::getline(std::cin, user_input);
		if (id < 9)
			max = id;
	}
	if (user_input == "EXIT")
		std::cout << "You are exiting the phonebook, you will not be able to access any of your contacts ever again! MUAHAHA!!!\n";
	return (0);
}

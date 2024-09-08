#include "PhoneBook.hpp"

void	present_programm()
{
	std::cout << std::endl << "This is a very very annoying phonebook." << std::endl << std::endl << std::endl;
	std::cout << "You have thee available options:" << std::endl;
	std::cout << "    ADD: Add a new contact" << std::endl;
	std::cout << "    SEARCH: Search for existing contacts" << std::endl;
	std::cout << "    EXIT: Exit the phonebook and LOOSE ALL YOUR CONTACTS!" << std::endl << std::endl;
}

int main(void)
{
	PhoneBook		book;
	std::string		user_input;
	int				max = 0;
	int				id = 0;

	present_programm();
	std::cout << "What option would you like?" << std::endl;
	std::getline(std::cin, user_input);
	while (user_input != "EXIT")
	{
		if (user_input == "ADD")
		{
			book.addContact(id % 8);
			id++;
		}
		else if (user_input == "SEARCH")
			book.displayContacts(max);
		else
			std::cout << "The only valid options are: ADD, SEARCH, EXIT. Please type a valid option." << std::endl << std::endl;
		std::cout << "What option would you like?" << std::endl;
		std::getline(std::cin, user_input);
		if (id < 9)
			max = id;
	}
	if (user_input == "EXIT")
		std::cout << "You are exiting the phonebook, you will not be able to access any of your contacts ever again! MUAHAHA!!!" << std::endl;
	return (0);
}

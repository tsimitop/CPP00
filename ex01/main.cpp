#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	book;
	// Contact		contact;
	std::cout << "Would you like to ADD/SEARCH a contact or EXIT the program?" << std::endl;
	std::string user_input;
	std::cin >> user_input;
	while (user_input != "EXIT")
	{
		if (user_input == "ADD")
			book::addContact(); // std::cout << "Perform add function" << std::endl; //add function
		else if (user_input == "SEARCH")
			std::cout << "Perform search function" << std::endl; //search function
		else
			std::cout << "Options are: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> user_input;
	}
	if (user_input == "EXIT")
		std::cout << "You are exiting the phonebook, you will not be able to access any of your contacts ever again" << std::endl;
	return (0);
}

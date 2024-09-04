#include "Phonebook.hpp"

void	present_programm()
{
	std::cout << "This is a very very annoying phonebook" << std::endl << std::endl << std::endl;
	std::cout << "You have thee available options:" << std::endl;
	std::cout << "    ADD: Add a new contact" << std::endl;
	std::cout << "    SEARCH: Search for existing contacts" << std::endl;
	std::cout << "    EXIT: Exit the phonebook and LOOSE OR YOUR CONTACTS!" << std::endl << std::endl;

}

int main(void)
{
	present_programm();
	PhoneBook	book;
	// Contact		contact;
	// std::cout << "Would you like to ADD/SEARCH a contact or EXIT the program?" << std::endl;
	std::string user_input;
	std::cout << "What option would you like?" << std::endl;
	std::cin >> user_input;
	int id = 0;
	while (user_input != "EXIT")
	{
		if (user_input == "ADD")
		{
			book.addContact(id % 8); // std::cout << "Perform add function" << std::endl; //add function
			id++;
		}
		else if (user_input == "SEARCH")
			std::cout << "Perform search function" << std::endl; //search function
		else
			std::cout << "The only valid options are: ADD, SEARCH, EXIT. Please type a valid option." << std::endl << std::endl;
		std::cout << "What option would you like?" << std::endl;
		std::cin >> user_input;
	}
	if (user_input == "EXIT")
		std::cout << "You are exiting the phonebook, you will not be able to access any of your contacts ever again" << std::endl;
	return (0);
}

		// 	std::cout << "Options are: ADD, SEARCH, EXIT" << std::endl;
#include "Phonebook.hpp"

void PhoneBook::addContact(int id)
{
	std::cout << "What is your contact's first name?" << std::endl;
	std::cin >> contacts[id].first_name;
	// std::cin >> this->contacts[id].first_name;
}



PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed." << std::endl;
}
	// std::cin >> PhoneBook::contacts[id]::first_name;
	// std::cout << "What is your contact's last name?" << std::endl;
	// std::cin >> last_name;
	// std::cout << "What is your contact's nickname?" << std::endl;
	// std::cin >> nickname;
	// std::cout << "What is your contact's phone number?" << std::endl;
	// std::cin >> phone_number;
	// std::cout << "What is your contact's darkest secret?" << std::endl;
	// std::cin >> darkest_secret;
	// std::cout << "Adding contact..." << std::endl;
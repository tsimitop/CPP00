#include "Phonebook.hpp"

void PhoneBook::addContact(int id)
{
	std::cout << id << ": What is your contact's first name?" << std::endl;
	std::cin >> contacts[id].first_name;
	std::cout << id << ": What is your contact's last name?" << std::endl;
	std::cin >> contacts[id].last_name;
	std::cout << id << ": What is your contact's nickname?" << std::endl;
	std::cin >> contacts[id].nickname;
	std::cout << id << ": What is your contact's phone number?" << std::endl;
	std::cin >> contacts[id].phone_number;
	std::cout << id << ": What is your contact's darkest secret?" << std::endl;
	std::cin >> contacts[id].darkest_secret;
	std::cout << id << ": Adding contact..." << std::endl;
	// std::cout << contacts[id].first_name << " Successfully stored for id" << id << std::endl;
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
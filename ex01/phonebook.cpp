#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
	std::cout << "What is your contact's first name?" << std::endl;
	std::cin >> PhoneBook::contacts[5]::first_name;
	std::cout << "What is your contact's last name?" << std::endl;
	std::cin >> last_name;
	std::cout << "What is your contact's nickname?" << std::endl;
	std::cin >> nickname;
	std::cout << "What is your contact's phone number?" << std::endl;
	std::cin >> phone_number;
	std::cout << "What is your contact's darkest secret?" << std::endl;
	std::cin >> darkest_secret;
	std::cout << "Adding contact..." << std::endl;
}

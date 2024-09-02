#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact();
	~Contact();
};

Contact::Contact()
{
	std::cout << "Contact created." << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destroyed." << std::endl;
}

class PhoneBook
{
private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void		addContact();
	void		searchContact();
};

void PhoneBook::addContact()
{
	std::cout << "What is your contact's first name?" << std::endl;
	std::cin >> first_name;
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

void PhoneBook::searchContact()
{
	std::cout << "Searching contact..." << std::endl;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

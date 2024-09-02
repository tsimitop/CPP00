#ifndef PHONEBOOK_H
 #define PHONEBOOK_H

# include "Contact.hpp"

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

void PhoneBook::searchContact()
{
	std::cout << "Searching contact..." << std::endl;
}

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed." << std::endl;
}

#endif
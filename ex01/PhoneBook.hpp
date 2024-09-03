#ifndef PHONEBOOK_H
 #define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
// private:
public:
	PhoneBook();
	~PhoneBook();
	Contact contacts[8];
	void		addContact(int id);
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
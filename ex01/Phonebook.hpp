#ifndef PHONEBOOK_H
 #define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
// private:
public:
	PhoneBook();
	~PhoneBook();
	Contact		contacts[8];
	void		addContact(int id);
	void		searchContact();
};


#endif
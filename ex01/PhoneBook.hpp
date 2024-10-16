#ifndef PHONEBOOK_H
 #define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
	void		singleContactDetails(int id);
	void		acceptValidField(std::string& field, int id);
	Contact		contacts[8];

public:
	PhoneBook();
	~PhoneBook();
	void		addContact(int id);
	void		displayContacts(PhoneBook phonebook, int max);
};


#endif
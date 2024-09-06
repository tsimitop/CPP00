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
	void		displayContacts(int max);
	void		contactLineDisplay(int id);
	void		columnSegment(std::string str);
	void		singleContactDetails(int id);
	void		acceptValidField(std::string& field);
	int			isNumber(std::string str);
};


#endif
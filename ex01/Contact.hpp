#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
// private:


public:
	std::string first_name;
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

#endif

	// std::string last_name;
	// std::string nickname;
	// std::string phone_number;
	// std::string darkest_secret;
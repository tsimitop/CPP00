#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
private:
	void		columnSegment(std::string str);

public:
	int		isEmpty(std::string& str);
	int		isNumber(std::string str);
	void	contactLineDisplay(Contact contact, int id);
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	Contact();
	~Contact();
};

#endif

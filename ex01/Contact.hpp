#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
private:
	void		columnSegment(std::string str);
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	int		isEmpty(std::string& str);
	int		isNumber(std::string str);
	void	contactLineDisplay(Contact contact, int id);
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickname(std::string str);
	void	setPhoneNumber(std::string str);
	void	setDarkestSecret(std::string str);
	std::string&	getFirstName();
	std::string&	getLastName();
	std::string&	getNickname();
	std::string&	getPhoneNumber();
	std::string&	getDarkestSecret();

	Contact();
	~Contact();
};

#endif

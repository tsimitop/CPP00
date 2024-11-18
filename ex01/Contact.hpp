#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
private:
	void		columnSegment(std::string str);
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	int			isEmpty(const std::string& str) const;
	int			isNumber(std::string str);
	void		contactLineDisplay(Contact contact, int id);
	void		setFirstName(const std::string& str);
	void		setLastName(const std::string& str);
	void		setNickname(const std::string& str);
	void		setPhoneNumber(const std::string& str);
	void		setDarkestSecret(const std::string& str);
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	Contact();
	~Contact();
};

int lineIsEmpty(const std::string& field);

#endif

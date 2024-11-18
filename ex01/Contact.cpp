#include "Contact.hpp"

int	Contact::isNumber(std::string str)
{
	for (char c : str)
		if (!std::isdigit(c))
			return (0);
	return (1);
}

void Contact::contactLineDisplay(Contact contact, int id)
{
	std::cout << id << "        |";
	columnSegment(contact.first_name);
	columnSegment(contact.last_name);
	columnSegment(contact.nickname);
	std::cout << std::endl;
	std::cout << std::endl;
}

void Contact::columnSegment(std::string str)
{
	int length = str.length();
	if ((length) > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".|";
	}
	else
	{
		std::cout << str;
		while (length < 10)
		{
			std::cout << " ";
			length++;
		}
		std::cout << "|";
	}
}

int	Contact::isEmpty(const std::string& field) const
{
	for (char c : field)
	{
		if (!std::isspace(c))
			return (0);
	}
	return (1);
}

int lineIsEmpty(const std::string& field)
{
	for (char c : field)
	{
		if (!std::isspace(c))
			return (0);
	}
	return (1);
}

void	Contact::setFirstName(const std::string& str)
{
	this->first_name = str;
}

void	Contact::setLastName(const std::string& str)
{
	this->last_name = str;
}

void	Contact::setNickname(const std::string& str)
{
	this->nickname = str;
}

void	Contact::setPhoneNumber(const std::string& str)
{
	this->phone_number = str;
}

void	Contact::setDarkestSecret(const std::string& str)
{
	this->darkest_secret = str;
}

std::string	Contact::getFirstName() const
{
	return (this->first_name);
}

std::string	Contact::getLastName() const
{
	return (this->last_name);
}

std::string	Contact::getNickname() const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkest_secret);
}


Contact::Contact()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setDarkestSecret("");

	// std::cout << "Contact created." << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact destroyed." << std::endl;
}
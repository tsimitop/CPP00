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

int	Contact::isEmpty(std::string& field)
{
	for (char c : field)
	{
		if (!std::isspace(c))
			return (0);
	}
	return (1);
}

Contact::Contact()
{
	// std::cout << "Contact created." << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact destroyed." << std::endl;
}
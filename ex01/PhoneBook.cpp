#include "PhoneBook.hpp"
#include <cctype>
#include <string>

void PhoneBook::addContact(int id)
{
	std::string	field;

	std::cout << id << ": What is your contact's first name?\n";
	acceptValidField(field);
	contacts[id].setFirstName(field);
	std::cout << id << ": What is your contact's last name?\n";
	acceptValidField(field);
	contacts[id].setLastName(field);
	std::cout << id << ": What is your contact's nickname?\n";
	acceptValidField(field);
	contacts[id].setNickname(field);
	std::cout << id << ": What is your contact's phone number?\n";
	acceptValidField(field);
	contacts[id].setPhoneNumber(field);
	std::cout << id << ": What is your contact's darkest secret?\n";
	acceptValidField(field);
	contacts[id].setDarkestSecret(field);
	std::cout << "Adding contact [" << id << "] ...\n\n";
}

bool	PhoneBook::fields_valid(int id)
{
	const Contact &contact = this->contacts[id];

	if (contact.isEmpty(contact.getFirstName()) || \
	contact.isEmpty(contact.getLastName()) || \
	contact.isEmpty(contact.getNickname()) || \
	contact.isEmpty(contact.getPhoneNumber()) || \
	contact.isEmpty(contact.getDarkestSecret()))
		return (false);
	return (true);
}

void	PhoneBook::acceptValidField(std::string& field)
{
	std::getline(std::cin, field);
	while (field.empty() || lineIsEmpty(field))
	{
		std::cout << "No field of your contact may be empty. Please provide an input.\n";
		if (!std::getline(std::cin, field) && std::cin.eof())
			exit(1);
	}
}

void	PhoneBook::singleContactDetails(int id)
{
	std::cout << "Contact id: " << id << std::endl;
	std::cout << "First name: " << contacts[id].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[id].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[id].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[id].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[id].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::displayContacts(PhoneBook phonebook, int max)
{
	int			id = 0;
	int			conv_uinpt;
	std::size_t	length;
	std::string	user_int;
	Contact		contact;

	if (max == 0)
		std::cout << "There are no contacts to display. Add a contact typing the ADD option.\n";
	else
	{
		std::cout << "Choose one of the following contacts:\n\n";
		std::cout << "ID       |FIRST NAME| LAST NAME| NICKNAME |\n\n";
		while (id < max)
		{
			contact.contactLineDisplay(phonebook.contacts[id], id);
			id++;
		}
		std::cout << "Enter the id of the contact you wish to display:\n";
		std::getline(std::cin, user_int);
		if (!contact.isNumber(user_int))
		{
			std::cout << "input is not acceptable.\n";
			return ;
		}
		length = user_int.length();
		if (length > 3)
		{
			std::cout << "Sorry, id is out of range. Better luck next time.\n";
			return ;
		}
		conv_uinpt = std::stoi(user_int);
		if (conv_uinpt >= max || conv_uinpt < 0)
			std::cout << "Sorry, id is out of range. Better luck next time.\n";
		else
			singleContactDetails(conv_uinpt);
	}
}

PhoneBook::PhoneBook()
{
	// std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "PhoneBook destroyed." << std::endl;
}

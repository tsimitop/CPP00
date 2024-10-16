#include "PhoneBook.hpp"
#include <cctype>
#include <string>

void PhoneBook::addContact(int id)
{
	std::cout << id << ": What is your contact's first name?" << std::endl;
	acceptValidField(contacts[id].first_name, id);
	std::cout << id << ": What is your contact's last name?" << std::endl;
	acceptValidField(contacts[id].last_name, id);
	std::cout << id << ": What is your contact's nickname?" << std::endl;
	acceptValidField(contacts[id].nickname, id);
	std::cout << id << ": What is your contact's phone number?" << std::endl;
	acceptValidField(contacts[id].phone_number, id);
	std::cout << id << ": What is your contact's darkest secret?" << std::endl;
	acceptValidField(contacts[id].darkest_secret, id);
	std::cout << "Adding contact [" << id << "] ..." << std::endl << std::endl;
}

void	PhoneBook::acceptValidField(std::string& field, int id)//Contact contact, 
{
	std::getline(std::cin, field);
	while (field.empty() || this->contacts[id].isEmpty(field))
	{
		std::cout << "No field of your contact may be empty. Please provide an input." << std::endl;
		if (!std::getline(std::cin, field) && std::cin.eof())
			exit(1);
	}
}

void	PhoneBook::singleContactDetails(int id)
{
	std::cout << "Contact id: " << id << std::endl;
	std::cout << "First name: " << contacts[id].first_name << std::endl;
	std::cout << "Last name: " << contacts[id].last_name << std::endl;
	std::cout << "Nickname: " << contacts[id].nickname << std::endl;
	std::cout << "Phone number: " << contacts[id].phone_number << std::endl;
	std::cout << "Darkest secret: " << contacts[id].darkest_secret << std::endl;
	std::cout << std::endl;
}

void PhoneBook::displayContacts(PhoneBook phonebook, int max)
{
	int id = 0;
	Contact contact;
	// PhoneBook phonebook;
	std::string	user_int;
	int conv_uinpt;
	std::size_t	length;
	if (max == 0)
		std::cout << "There are no contacts to display. Add a contact typing the ADD option." << std::endl;
	else
	{
		std::cout << "Choose one of the following contacts:" << std::endl << std::endl;
		while (id < max)
		{
			contact.contactLineDisplay(phonebook.contacts[id], id);
			id++;
		}
		std::cout << "Enter the id of the contact you wish to display:" << std::endl;
		std::getline(std::cin, user_int);
		if (!contact.isNumber(user_int))
		{
			std::cout << "input is not acceptable." << std::endl;
			return ;
		}
		length = user_int.length();
		if (length > 3)
		{
			std::cout << "Sorry, id is out of bounds. Better luck next time." << std::endl;
			return ;
		}
		conv_uinpt = std::stoi(user_int);
		if (conv_uinpt >= max || conv_uinpt < 0)
			std::cout << "Sorry, id is out of bounds. Better luck next time." << std::endl;
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

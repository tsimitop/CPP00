#include "PhoneBook.hpp"
#include <cctype>
#include <string>

void PhoneBook::addContact(int id)
{
	std::cout << id << ": What is your contact's first name?" << std::endl;
	acceptValidField(contacts[id].first_name);
	std::cout << id << ": What is your contact's last name?" << std::endl;
	acceptValidField(contacts[id].last_name);
	std::cout << id << ": What is your contact's nickname?" << std::endl;
	acceptValidField(contacts[id].nickname);
	std::cout << id << ": What is your contact's phone number?" << std::endl;
	acceptValidField(contacts[id].phone_number);
	std::cout << id << ": What is your contact's darkest secret?" << std::endl;
	acceptValidField(contacts[id].darkest_secret);
	std::cout << "Adding contact [" << id << "] ..." << std::endl << std::endl;
}

int	PhoneBook::isNumber(std::string str)
{
	for (char c : str)
		if (!std::isdigit(c))
			return (0);
	return (1);
}

void	PhoneBook::acceptValidField(std::string& field)
{
	std::getline(std::cin, field);
	if (field.empty())
	{
		while (field.empty())
		{
			if (!std::getline(std::cin, field) && std::cin.eof())
				exit(1);
			std::cout << "No field of your contact may be empty. Please provide an input." << std::endl;
		}
	}
}

void PhoneBook::contactLineDisplay(int id)
{
	std::cout << id << "        |";
	columnSegment(contacts[id].first_name);
	columnSegment(contacts[id].last_name);
	columnSegment(contacts[id].nickname);
	std::cout << std::endl;
	std::cout << std::endl;
}

void PhoneBook::columnSegment(std::string str)
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

void PhoneBook::displayContacts(int max)
{
	int id = 0;
	// long long user_int;
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
			contactLineDisplay(id);
			id++;
		}
		std::cout << "Enter the id of the contact you wish to display:" << std::endl;
		std::getline(std::cin, user_int);
		if (!isNumber(user_int))
		{
			std::cout << "This is not a number." << std::endl;
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

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void		Account::makeDeposit( int deposit )
{
	(void)deposit;
	// std::cout << "FUNCTION DECLARED" << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	// std::cout << "FUNCTION DECLARED" << std::endl;
	return (true);
}

int			Account::checkAmount( void ) const
{
	// std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

void		Account::displayStatus( void ) const
{
	// std::cout << "FUNCTION DECLARED" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	timestamp;
	char	printable[20];

	time(&timestamp);
	strftime(printable, 20, "[%Y%m%d_%H%M%S]", localtime(&timestamp));
	std::cout << printable;
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

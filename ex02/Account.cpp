#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

int	Account::getTotalAmount( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

int	Account::getNbDeposits( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
}

void		Account::makeDeposit( int deposit )
{
	(void)deposit;
	std::cout << "FUNCTION DECLARED" << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (true);
}

int			Account::checkAmount( void ) const
{
	std::cout << "FUNCTION DECLARED" << std::endl;
	return (0);
}

void		Account::displayStatus( void ) const
{
	std::cout << "FUNCTION DECLARED" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "FUNCTION DECLARED" << std::endl;
}





Account::Account(int initial_deposit)
{
	std::cout << "Account created." << std::endl;
	std::cout << "Account's initial_deposit is: " << initial_deposit << std::endl;
}

Account::~Account()
{
	std::cout << "Account destroyed." << std::endl;
}

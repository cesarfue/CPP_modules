/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:28:14 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/17 11:28:50 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account( int deposit ) {
	_accountIndex  = getNbAccounts();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = deposit;
	Account::_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" \
		<< Account::checkAmount() << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account( void ) {
	
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" \
		<< Account::checkAmount() << ";closed" << std::endl;
	Account::_nbAccounts--;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount \
		 << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals \
		<< std::endl;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() \
		<< ";deposits:" << Account::getNbDeposits() <<  ";withdrawals:" << Account::getNbWithdrawals() \
		<< std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t time = std::time(0);
    std::tm* tm = std::localtime(&time);
	char buff[20];
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", tm);
    std::cout << "[" << buff << "] ";
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposit:" << deposit;
	_nbDeposits++;
	_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << Account::_amount << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:";
	
	if (Account::_amount - withdrawal < 0) { 
		std::cout << "refused" << std::endl;
		return false; 
	}
	_nbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount( void ) const {
	return Account::_amount; 
}	


int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts; 
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}
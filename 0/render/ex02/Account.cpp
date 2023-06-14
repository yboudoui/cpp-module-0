/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:46:44 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 14:56:56 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>

// Initialize static member variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Helper function to display the current timestamp
void	Account::_displayTimestamp(void) {
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

// Static member function to get the total number of accounts
int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

// Static member function to get the total amount across all accounts
int	Account::getTotalAmount(void) {
	return _totalAmount;
}

// Static member function to get the total number of deposits
int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

// Static member function to get the total number of withdrawals
int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

// Static member function to display information about all accounts
void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Constructor with initial deposit
Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created" << std::endl;
}

// Destructor
Account::~Account(void) {
	_nbAccounts -= 1;
	_totalAmount -= _amount;

	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";closed" << std::endl;
}

// Make a deposit
void Account::makeDeposit(int deposit) {
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << _amount - deposit
	<< ";deposit:" << deposit
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits
	<< std::endl;
}

// Make a withdrawal
bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << _amount;
	if (_amount >= withdrawal) {
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
		return (true);
	}
	else {
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

// Check the current amount in the account
int Account::checkAmount(void) const {
	return _amount;
}

// Display the status of the account
void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}


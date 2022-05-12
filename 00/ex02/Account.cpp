/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:01:25 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/20 16:54:30 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	static int	index = 0;
	
	this->_accountIndex = index;
	this->_nbAccounts = index + 1;
	this->_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	index++;
}

Account::~Account(void){
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int  Account::getNbAccounts(void){
    return (_nbAccounts);
}

int  Account::getTotalAmount(void){
    return (_totalAmount);
}

int  Account::getNbDeposits(void){
    return (_totalNbDeposits);
}

int  Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp(void){
    struct tm   *timer;
    std::time_t result = std::time(NULL);

    timer = localtime(&result);
    std::cout << "[" << timer->tm_year + 1900 << timer->tm_mon << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec << "]";
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std:: endl;
}

void	Account::makeDeposit(int deposit){
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	if (this->_amount < withdrawal)
		return (this->checkAmount());
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
	return (1);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

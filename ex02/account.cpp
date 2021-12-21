/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:10:57 by yait-kad          #+#    #+#             */
/*   Updated: 2021/12/20 10:10:59 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout<<"index:"<< getNbAccounts();
	std::cout<<";amount:"<<initial_deposit;
	std::cout<<";created"<<std::endl;
	_nbAccounts++;
	_totalAmount +=initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex;
	std::cout<<";amount:"<<_amount;
	std::cout<<";closed"<<std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<<"accounts:"<< getNbAccounts();
	std::cout<<";total:"<< getTotalAmount();
	std::cout<<";deposits:"<<getNbDeposits();
	std::cout<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex;
	std::cout<<";amount:"<<_amount;
	std::cout<<";deposits:"<<_nbDeposits;
	std::cout<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout<<"index:"<<_accountIndex;
	std::cout<<";p_amount:"<<_amount;
	std::cout<<";deposit:"<<deposit;
	_amount += deposit;
	std::cout<<";amount:"<<_amount;
	std::cout<<";nb_deposits:"<<_nbDeposits<<std::endl;
	_totalAmount += deposit;
	_totalNbDeposits += _nbDeposits;
}

int		Account::checkAmount() const
{
	return (_amount);
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex;
	std::cout<<";p_amount:"<<_amount;

	if (checkAmount() >= withdrawal)
	{
		std::cout<<";withdrawal:"<<withdrawal;
		_amount -= withdrawal;
		std::cout<<";amount:"<<_amount;
		_nbWithdrawals++;
		std::cout<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += _nbWithdrawals;
		return (true);
	}else
	{
		std::cout<<";withdrawal:refused"<<std::endl;
		return (false);
	}
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	char	strtime[100];

	now = time(NULL);
	strftime(strtime, sizeof(strtime),"[%Y%m%d_%H%M%S] ",localtime(&now));
	std::cout<<strtime;
}
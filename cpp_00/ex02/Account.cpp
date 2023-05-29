/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:43:37 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/25 18:39:48 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), _accountIndex(_nbAccounts)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
	_nbAccounts++;
	_totalAmount += _amount;
	return ;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

int		Account::getNbAccounts()
{
	return (_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits = 1;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposit:" << _totalNbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= _amount;
		_totalNbWithdrawals = 1;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _totalNbWithdrawals << "\n";
		return (1);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return (0);
	}
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::_displayTimestamp()
{
	std::time_t currentTime = std::time(NULL);
    char timestamp[100];
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", std::localtime(&currentTime));
    std::cout << timestamp;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
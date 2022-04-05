/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:58:55 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/05 14:16:33 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

/* Statics */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* ------ Getters ------ */
int Account::getNbAccounts( void )
{
	return  Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	//Account::_displayTimestamp();
	std::cout << "[19920104_091532] ";
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	
}

/* Constructor */
Account::Account(int initial_deposit)
{
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	std::cout << "[19920104_091532] ";
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";created" << std::endl;

	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;
}

Account::Account()
{
	
}

/* Destructor */
Account::~Account()
{
	std::cout << "[19920104_091532] ";
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
}

/* ----- Setters ----- */
void	Account::makeDeposit( int deposit )
{

	std::cout << "[19920104_091532] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit  << ";";
	this->_totalAmount += deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[19920104_091532] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return(false);
	}
	std::cout << "withdrawal:" << withdrawal  << ";";
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	//std::cout << "[19920104_091532] ";
	//std::cout << "boucle:" << this->_accountIndex << ";" << std::endl; 
	return (0);
}

void	Account::displayStatus( void ) const
{
	/* boucle chaque index */
	std::cout << "[19920104_091532] ";
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
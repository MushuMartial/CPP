/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:12:54 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 18:06:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/* Constructor */
ClapTrap::ClapTrap() : _name("default"), _HP(1), _EP(1), _AD(0)
{
	std::cout << "Default ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy ClapTrap constructor" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(1), _EP(1), _AD(0)
{
	std::cout << "ClapTrap " << name << " constructor" << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

/* Overload */
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

/* Functions */
void ClapTrap::attack(const std::string& target)
{
	if (!this->_EP || this->_HP <= 0)
	{
		std::cout << "ClapTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_AD;
	std::cout << " points of damage!" << std::endl;

	this->_EP--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " has taken " <<  amount;
	std::cout << " points of damage!" << std::endl;

	this->_HP -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_EP || this->_HP <= 0)
	{
		std::cout << "ClapTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " has regained " << amount << std::endl;

	this->_HP += amount;
	this->_EP--;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:00 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 14:13:01 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor" << std::endl;
	this->_HP = 1;
	this->_EP = 1;
	this->_AD = 0;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor" << std::endl;
	//*this = src;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_HP = 1;
	this->_EP = 1;
	this->_AD = 0;
	std::cout << "ScavTrap " << name << " constructor" << std::endl;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

/* Overload */
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

/* Functions */
void ScavTrap::guardGate()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->_EP || this->_HP <= 0)
	{
		std::cout << "ScavTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "ScavTrap " <<  this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_AD;
	std::cout << " points of damage!" << std::endl;

	this->_EP--;
}
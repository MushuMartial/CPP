/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:00 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 14:08:58 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Constructor */
ScavTrap::ScavTrap() 
{
	std::cout << "Default ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int HP, int EP, int AD) : ClapTrap(name, HP, EP, AD)
{
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
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

/* Functions */
void ScavTrap::attack(const std::string& target)
{
	if (!this->_EP)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack, he has no more energy." << std::endl;
		return;
	}
	if (!this->_HP)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack, he's dead." << std::endl;
		return;
	}
	std::cout << "ScavTrap " <<  this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_AD;
	std::cout << " points of damage!" << std::endl;

	this->_EP--;
}

void ScavTrap::guardGate()
{
	if (!this->_EP)
	{
		std::cout << "ScavTrap " << this->_name << " can't guard, he has no more energy." << std::endl;
		return;
	}
	if (!this->_HP)
	{
		std::cout << "ScavTrap " << this->_name << " can't guard, he's dead." << std::endl;
		return;
	}
	std::cout << "ScavTrap "<< this->_name << " has entered in guard mode." << std::endl;
}

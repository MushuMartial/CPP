/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:10:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 18:05:19 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/* Constructor */
ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor" << std::endl;
	this->_name = "default";
	this->_HitPoints = 1;
	this->_EnergyPoints = 1;
	this->_AttackDamage = 1;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy ClapTrap constructor" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name, int PV, int PC, int DMG)
{
	this->_name = name;
	this->_HitPoints = PV;
	this->_EnergyPoints = PC;
	this->_AttackDamage = DMG;
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
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

/* Functions */
void ClapTrap::attack(const std::string& target)
{
	if (!this->_EnergyPoints || this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_AttackDamage;
	std::cout << " points of damage!" << std::endl;

	this->_EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " has taken " <<  amount;
	std::cout << " points of damage!" << std::endl;

	this->_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_EnergyPoints || this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "ClapTrap " <<  this->_name;
	std::cout << " has regained " << amount << std::endl;

	this->_HitPoints += amount;
	this->_EnergyPoints--;
}

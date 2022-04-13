/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:00 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 18:42:33 by tmartial         ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "Copy ScavTrap constructor" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name, int PV, int PC, int DMG)
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
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

/* Functions */
void ScavTrap::guardGate()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}
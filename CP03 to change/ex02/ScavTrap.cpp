/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:00 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 11:41:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor" << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "Copy ScavTrap constructor" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor" << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
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
void ScavTrap::guardGate()
{
	if (!this->_EP)
	{
		std::cout << "ScavTrap " << this->_name << " can't guard, he has no more energy." << std::endl;
		return;
	}
	if (!this->_HP)
	{
		std::cout << "ClapTrap " << this->_name << " can't guard, he's dead." << std::endl;
		return;
	}
	std::cout << "ScavTrap "<< this->_name << " has entered in guard mode." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:02:41 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 14:02:41 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

/* Constructor */
DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor" << std::endl;
	this->_name = "Default Trap";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	std::cout << "Copy DiamondTrap constructor" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << name << " constructor" << std::endl;
	this->_name = name;
	this->_HP = 101;
	this->_EP = 50;
	this->_AD = 35;
}

/* Destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

/* Overload */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

/* Functions */
void DiamondTrap::whoAmI()
{
	if (!this->_EP)
	{
		std::cout << "ClapTrap " << this->_name << " can't speak, he has no more energy." << std::endl;
		return;
	}
	if (!this->_HP)
	{
		std::cout << "ClapTrap " << this->_name << " can't speak, he's dead." << std::endl;
		return;
	}
	std::cout << "DiamondTrap name is " << this->_name;
	std::cout << " and ClapTrap name is " << ClapTrap::getName() << std::endl;
}

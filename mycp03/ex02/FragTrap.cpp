/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 14:13:07 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/* Constructor */
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor" << std::endl;
	this->_HP = 1;
	this->_EP = 1;
	this->_AD = 0;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "Copy FragTrap constructor" << std::endl;
	//*this = src;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HP = 1;
	this->_EP = 1;
	this->_AD = 0;
	std::cout << "FragTrap " << name << " constructor" << std::endl;
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

/* Overload */
FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

/* Functions */
void FragTrap::highFivesGuys()
{
	std::cout << "High Five gus called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->_EP || this->_HP <= 0)
	{
		std::cout << "FragTrap " <<  this->_name << " can't do this action." << std::endl;
		return;
	}
	std::cout << "FragTrap " <<  this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_AD;
	std::cout << " points of damage!" << std::endl;

	this->_EP--;
}
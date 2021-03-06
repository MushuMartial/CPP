/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 13:51:19 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/* Constructor */
FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "Default FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "Copy FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructor" << std::endl;
}

FragTrap::FragTrap(std::string name, int HP, int EP, int AD) : ClapTrap(name, HP, EP, AD)
{
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
	this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;
	return *this;
}

/* Functions */
void FragTrap::highFivesGuys()
{
	if (!this->_EP)
	{
		std::cout << "FragTrap " << this->_name << " can't high five, he has no more energy." << std::endl;
		return;
	}
	if (!this->_HP)
	{
		std::cout << "ClapTrap " << this->_name << " can't high five, he's dead." << std::endl;
		return;
	}
	std::cout << "FragTrap "<< this->_name << " wants to high five." << std::endl;
}

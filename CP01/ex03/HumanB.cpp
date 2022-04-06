/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:39:53 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 15:56:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

/* Constructor */
HumanB::HumanB(std::string name)
{
	this->_name = name;
	//this->_weapon = NULL;
}

/* Destructor */
HumanB::~HumanB()
{
	
}

/* Getters */
std::string HumanB::getName() const
{
	return this->_name;
}

/* Setters */
void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

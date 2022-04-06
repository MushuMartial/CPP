/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:39:22 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 15:29:51 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

/* Constructor */
Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::Weapon()
{
	
}

/* Destructor */
Weapon::~Weapon()
{
	
}

/* Setters */
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

/* Getters */
const std::string& Weapon::getType() const
{
	return this->_type;
}
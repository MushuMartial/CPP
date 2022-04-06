/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:10:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 11:34:16 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/* Constructor */
Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
}

Zombie::Zombie()
{
	
}

/* Destructor */
Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed." << std::endl;
}

/* Setters */
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/* Getters */
std::string	Zombie::getName()
{
	return this->_name;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BrainnnnzzzzZ...." << std::endl;
}

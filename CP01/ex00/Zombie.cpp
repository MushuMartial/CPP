/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:48 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 10:49:59 by tmartial         ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:48 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/05 16:56:26 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/* Constructor */
Zombie::Zombie()
{
	
}

/* Destructor */
Zombie::~Zombie()
{
	
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

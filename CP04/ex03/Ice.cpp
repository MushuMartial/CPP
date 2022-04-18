/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:24 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 12:29:43 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/* Constructor */
WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type)
{
	std::cout << "Copy WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal " << type << " constructor" << std::endl;
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

/* Overload */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string WrongAnimal::getType() const
{
	return this->_type;
}

/* Functions */
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Makesound called" << std::endl;
}
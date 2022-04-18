/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:23:20 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:23:23 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

/* Constructor */
AAnimal::AAnimal() : _type("Default")
{
	std::cout << "AAnimal Default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) : _type(src._type)
{
	std::cout << "Copy AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << type << " constructor" << std::endl;
}

/* Destructor */
AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal called" << std::endl;
}

/* Overload */
AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string AAnimal::getType() const
{
	return this->_type;
}

/*void AAnimal::setType(std::string type)
{
	this->_type = type;
}*/
/* Functions */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:51:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:15:40 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

/* Constructor */
Dog::Dog()
{
	std::cout << "Default Dog constructor" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Copy Dog constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog " << type << " constructor" << std::endl;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

/* Overload */
Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string Dog::getType() const
{
	return this->_type;
}

/* Functions */
void Dog::makeSound() const
{
	std::cout << "Dog Makesound called" << std::endl;
}

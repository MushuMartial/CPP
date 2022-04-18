/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 16:44:42 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/* Constructor */
Animal::Animal() : _type("Default")
{
	std::cout << "Animal Default constructor" << std::endl;
}

Animal::Animal(const Animal& src) : _type(src._type)
{
	std::cout << "Copy Animal constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << type << " constructor" << std::endl;
}

/* Destructor */
Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

/* Overload */
Animal& Animal::operator=(const Animal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string Animal::getType() const
{
	return this->_type;
}

/* Functions */
void Animal::makeSound() const
{
	std::cout << "Animal makesound called : sheeeshhh" << std::endl;
}
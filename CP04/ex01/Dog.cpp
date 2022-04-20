/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:51:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 16:44:04 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

/* Constructor */
Dog::Dog() : Animal("dog"), _brain(new Brain())
{
	std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Copy Dog constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Dog " << type << " constructor" << std::endl;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}

/* Overload */
Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

/* Getters */
std::string Dog::getType() const
{
	return this->_type;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}


/* Functions */
void Dog::makeSound() const
{
	std::cout << "Dog makesound called : woof" << std::endl;
}
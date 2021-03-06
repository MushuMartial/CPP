/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:34 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 16:44:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

/* Constructor */
Cat::Cat() : Animal("cat")
{
	std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Copy Cat constructor" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat " << type << " constructor" << std::endl;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

/* Overload */
Cat& Cat::operator=(const Cat& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string Cat::getType() const
{
	return this->_type;
}

/* Functions */
void Cat::makeSound() const
{
	std::cout << "Cat makesound called : miaou" << std::endl;
}

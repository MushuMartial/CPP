/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:08:27 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 16:45:01 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

/* Constructor */
WrongCat::WrongCat() : WrongAnimal("wrongcat")
{
	std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << type << " constructor" << std::endl;
}

/* Destructor */
WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

/* Overload */
WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string WrongCat::getType() const
{
	return this->_type;
}

/* Functions */
void WrongCat::makeSound() const
{
	std::cout << "WrongCat makesound called : miaou" << std::endl;
}


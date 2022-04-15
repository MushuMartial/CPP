/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:24 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 17:08:04 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/* Constructor */
WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) //: _name(src._name), _HP(src._HP), _EP(src._EP), _AD(src._AD)
{
	std::cout << "Copy WrongAnimal constructor" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "WrongAnimal " << name << " constructor" << std::endl;
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

/* Overload */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	/*this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;*/
	return *this;
}

/* Getters */

/* Functions */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:28:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/* Constructor */
Animal::Animal()
{
	std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(const Animal& src) //: _name(src._name), _HP(src._HP), _EP(src._EP), _AD(src._AD)
{
	std::cout << "Copy Animal constructor" << std::endl;
	*this = src;
}

Animal::Animal(std::string name)
{
	std::cout << "Animal " << name << " constructor" << std::endl;
}

/* Destructor */
Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

/* Overload */
Animal& Animal::operator=(const Animal& rhs)
{
	/*this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;*/
	return *this;
}

/* Getters */

/* Functions */

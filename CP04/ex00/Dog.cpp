/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:51:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:29:06 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/* Constructor */
Dog::Dog()
{
	std::cout << "Default Dog constructor" << std::endl;
}

Dog::Dog(const Dog& src) //: _name(src._name), _HP(src._HP), _EP(src._EP), _AD(src._AD)
{
	std::cout << "Copy Dog constructor" << std::endl;
	*this = src;
}

Dog::Dog(std::string name)
{
	std::cout << "Dog " << name << " constructor" << std::endl;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

/* Overload */
Dog& Dog::operator=(const Dog& rhs)
{
	/*this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;*/
	return *this;
}

/* Getters */

/* Functions */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:34 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:28:54 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/* Constructor */
Cat::Cat()
{
	std::cout << "Default Cat constructor" << std::endl;
}

Cat::Cat(const Cat& src) //: _name(src._name), _HP(src._HP), _EP(src._EP), _AD(src._AD)
{
	std::cout << "Copy Cat constructor" << std::endl;
	*this = src;
}

Cat::Cat(std::string name)
{
	std::cout << "Cat " << name << " constructor" << std::endl;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

/* Overload */
Cat& Cat::operator=(const Cat& rhs)
{
	/*this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;*/
	return *this;
}

/* Getters */

/* Functions */

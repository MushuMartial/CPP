/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:08:27 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 17:08:31 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/* Constructor */
WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) //: _name(src._name), _HP(src._HP), _EP(src._EP), _AD(src._AD)
{
	std::cout << "Copy WrongCat constructor" << std::endl;
	*this = src;
}

WrongCat::WrongCat(std::string name)
{
	std::cout << "WrongCat " << name << " constructor" << std::endl;
}

/* Destructor */
WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

/* Overload */
WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	/*this->_name = rhs._name;
	this->_HP = rhs._HP;
	this->_EP = rhs._EP;
	this->_AD = rhs._AD;*/
	return *this;
}

/* Getters */

/* Functions */

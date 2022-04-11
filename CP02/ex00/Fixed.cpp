/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:38:00 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 11:54:56 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

/* Constructors */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* Destructors */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Geters */
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

/* Setters */
void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Operator = called " << std::endl;
	this->_fixedValue = rhs.getRawBits();
	return *this;
}
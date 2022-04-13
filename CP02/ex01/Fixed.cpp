/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:06:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 16:55:16 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>
#include <fstream>

/* Constructors */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (num * 256);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue =  int(roundf(num * 256));
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
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

/* Setters */
void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

/* Overload */
Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Operator called " << std::endl;
	this->_fixedValue = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();;
	return o;
}

/* Functions */
float	Fixed::toFloat() const
{
	return float(this->_fixedValue) / 256;
}

int		Fixed::toInt() const
{
	return (this->_fixedValue / 256);
}

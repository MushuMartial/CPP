/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:29:44 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 17:33:48 by tmartial         ###   ########.fr       */
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
	this->_fixedPoint = 0;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = (num << Fixed::_fraction);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint =  int(roundf(num * (1 << Fixed::_fraction)));
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
	return this->_fixedPoint;
}

/* Setters */
void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

/* Overload */
Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Operator called " << std::endl;
	this->_fixedPoint = rhs.getRawBits();
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
	return float(this->_fixedPoint) / (1 << _fraction);
}

int		Fixed::toInt() const
{
	return (this->_fixedPoint >> _fraction);
}

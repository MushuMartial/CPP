/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:54:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 16:30:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Scalar.hpp"

/* Constructors */
Scalar::Scalar() : _string("0") ,_charVal(0), _intVal(0), _floatVal(0), _doubleVal(0)
{
	
}

Scalar::Scalar(std::string string) : _string(string)
{
    this->_charVal = static_cast<int>(std::atoi(string.c_str()));
    this->_intVal = std::atoi(string.c_str());
    this->_floatVal = static_cast<float>(std::atof(string.c_str()));
    this->_doubleVal = static_cast<double>(std::atof(string.c_str()));
}

Scalar::Scalar(const Scalar& src)
: _string(src._string), _charVal(src._charVal), _intVal(src._intVal), _floatVal(src._floatVal), _doubleVal(src._doubleVal)
{
	
}

/* Destructor */
Scalar::~Scalar()
{
	
}

/* Operator Overload */
Scalar& Scalar::operator=(const Scalar& rhs)
{
	this->_string = rhs._string;
	this->_intVal = rhs._intVal;
	this->_floatVal = rhs._floatVal;
	this->_doubleVal = rhs._doubleVal;
	return *this;
}

/* Getters */
char Scalar::getChar() const
{
	if (!isprint(this->_charVal) && this->_string != "0" && this->_intVal == 0)
		throw Scalar::Impossible();
	/*else if (this->_intVal < 0)
		throw Scalar::Impossible();*/
	else if (!isprint(this->_charVal))
		throw Scalar::NonDisplayable();
	return this->_charVal;
}

int Scalar::getIntExecption() const
{
	if (this->_string != "0" && this->_intVal == 0 && this->_floatVal != 0)
		throw Scalar::Impossible();
	return this->_intVal;
}

float Scalar::getFloat() const
{
	return this->_floatVal;
}

double Scalar::getDouble() const
{
	return this->_floatVal;
}

int Scalar::getInt() const
{
	return this->_intVal;
}
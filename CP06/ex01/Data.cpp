/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:54:46 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 15:15:29 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Data.hpp"

/* Constructors */
Data::Data() : _person("Default"), _name("Default"), _mainSmash("Default"), _age(1)
{
	
}

Data::Data(std::string person) : _person(person)
{

}

Data::Data(const Data& src)
: _person(src._person), _name(src._name), _mainSmash(src._mainSmash), _age(src._age)
{
	
}

/* Destructor */
Data::~Data()
{
	
}

/* Operator Overload */
Data& Data::operator=(const Data& rhs)
{
	this->_person = rhs._person;
	this->_name = rhs._name;
	this->_mainSmash = rhs._mainSmash;
	this->_age = rhs._age;
	return *this;
}

/* Getters */
std::string Data::getPerson() const
{
	return this->_person;
}

std::string Data::getName() const
{
	return this->_name;
}
std::string Data::getmainSmash() const
{
	return this->_mainSmash;
}
int Data::getAge() const
{
	return this->_age;
}

/* Setters */
void Data::setName(std::string name)
{
	this->_name = name;
}

void Data::setmainSmash(std::string mainSmash)
{
	this->_mainSmash = mainSmash;
}

void Data::setAge(int age)
{
	this->_age = age;
}

/* Functions */
Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
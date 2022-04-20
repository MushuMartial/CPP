/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/19 17:23:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

/* Constructor */
AMateria::AMateria() : _type("Default")
{
	//std::cout << "AMateria Default constructor" << std::endl;
}

AMateria::AMateria(const AMateria& src) : _type(src._type)
{
	//std::cout << "Copy AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "AMateria " << type << " constructor" << std::endl;
}

/* Destructor */
AMateria::~AMateria()
{
	//std::cout << "Destructor AMateria called" << std::endl;
}

/* Overload */
AMateria& AMateria::operator=(const AMateria& rhs)
{
	this->_type = rhs._type;
	return *this;
}

/* Getters */
std::string const &AMateria::getType() const
{
	return this->_type;
}

/* Functions */
void AMateria::use(ICharacter& target)
{
	(void)target;
}

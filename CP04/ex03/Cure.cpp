/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:51:06 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 12:53:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

/* Constructor */
Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure Default constructor" << std::endl;
}

Cure::Cure(const Cure& src) : AMateria(src)
{
	//std::cout << "Cure Copy constructor" << std::endl;
}

/* Destructor */
Cure::~Cure()
{
	//std::cout << "Destructor Cure called" << std::endl;
}

/* Overload */
Cure& Cure::operator=(const Cure& rhs)
{
	//*this = rhs;
	this->AMateria::operator=(rhs);
	return *this;
}

/* Functions */
AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}
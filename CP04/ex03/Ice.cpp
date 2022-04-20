/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:24 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 13:39:35 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

/* Constructor */
Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice Default constructor" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria(src)
{
	//std::cout << "Ice Copy constructor" << std::endl;
}

/* Destructor */
Ice::~Ice()
{
	//std::cout << "Destructor Ice called" << std::endl;
}

/* Overload */
Ice& Ice::operator=(const Ice& rhs)
{
	this->AMateria::operator=(rhs);
	return *this;
}

/* Functions */
AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
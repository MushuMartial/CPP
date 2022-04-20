/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:05:35 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 13:49:07 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

/* Constructor */
MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	//std::cout << "MateriaSource Copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (src._materia[i]) ? src._materia[i]->clone() : NULL;
}

/* Destructor */
MateriaSource::~MateriaSource()
{
	//std::cout << "Destructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

/* Overload */
MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	this->~MateriaSource();
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (rhs._materia[i]) ? rhs._materia[i]->clone() : NULL;
	return *this;
}

/* Functions */
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			//std::cout << "learned i = " << i << std::endl;
			this->_materia[i] = m;
			break;
		}
		if (i == 3)
			std::cout << "Equipements FULL you can t learn Materia" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}

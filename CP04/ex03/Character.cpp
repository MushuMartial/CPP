/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:50:46 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 14:53:41 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

/* Constructor */
Character::Character() : _name("default")
{
	//std::cout << "Character Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(const Character& src) : _name(src._name)
{
	//std::cout << "Character Copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (src._materia[i]) ? src._materia[i]->clone() : NULL;
}

Character::Character(std::string name) : _name(name)
{
	//std::cout << "Character " << name << " constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

/* Destructor */
Character::~Character()
{
	//std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

/* Overload */
Character& Character::operator=(const Character& rhs)
{
	this->~Character();
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (rhs._materia[i]) ? rhs._materia[i]->clone() : NULL;
	return *this;
}

/* Getters */
std::string const &Character::getName() const
{
	return this->_name;
}

/* Functions */
void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] == NULL)
			{
				this->_materia[i] = m;
				break;
			}
			if (i == 3)
				std::cout << "Equipements FULL you can t add Materia" << std::endl;
		}
	}
	else
	{
		std::cout << "Materia doesnt exist" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (!this->_materia[idx])
		std::cout << "Equipements " << idx << " doesnt exist." << std::endl;
	else
	{
		this->_materia[idx] = NULL;
		std::cout << "You removed Materia" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (!this->_materia[idx])
		std::cout << "Equipements " << idx << " doesnt exist." << std::endl;
	else
	{
		this->_materia[idx]->use(target);
	}
}

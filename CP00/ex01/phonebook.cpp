/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:47:07 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/04 14:37:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	this->_count = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

void	Phonebook::setContact(Contact contact)
{
	this->_contacts[_index] = contact;
	if (this->_count < 7)
		this->_count++;
	if (this->_index == 7)
		this->_index = 0;
	else
		this->_index++;
}

int		Phonebook::getCount() const
{
	return this->_count;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

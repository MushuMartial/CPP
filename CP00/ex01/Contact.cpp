/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:56:58 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/05 14:27:01 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

/* ------ Setters ----- */
void	Contact::setFirstName(std::string str)
{
	this->_first_name = str;
}

void	Contact::setLastName(std::string str)
{
	this->_last_name = str;
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->_phone_number = str;
}

void	Contact::setSecret(std::string str)
{
	this->_secret = str;
}

/* ------ Getters ----- */
std::string	Contact::getFirstName() const
{
	return this->_first_name;
}

std::string	Contact::getLastName() const
{
	return this->_last_name;
}

std::string	Contact::getNickName() const
{
	return this->_nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return this->_phone_number;
}

std::string	Contact::getSecret() const
{
	return this->_secret;
}
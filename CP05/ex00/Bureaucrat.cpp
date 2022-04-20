/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:11:56 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 15:29:42 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

/* Constructor */
Bureaucrat::Bureaucrat() : _name("Default")
{
	std::cout << "Bureaucrat Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name)
{
	std::cout << "Copy Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	std::cout << "Bureaucrat " << name << " constructor" << std::endl;
}

/* Destructor */
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

/* Overload */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	//this->_name = rhs._name;
	return *this;
}

/* Getters */
std::string Bureaucrat::getName() const
{
	return this->_name;
}

/* Functions */

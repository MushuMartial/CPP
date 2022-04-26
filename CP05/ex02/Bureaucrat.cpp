/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:11:56 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 15:35:53 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

/* Constructor */
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade)
{
	std::cout << "Copy Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
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
	(void)rhs;
	this->_grade = rhs._grade;
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

/* Getters */
std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* Functions */
void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
		std::cout << this->_name << " is incremented to " << this->_grade << std::endl;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
		std::cout << this->_name << " is decremented to " << this->_grade << std::endl;
}

void Bureaucrat::signAForm(AForm& Aform)
{
	try
	{
		Aform.beSigned(*this);
		std::cout << *this << " signed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " cannot sign " << Aform.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeAForm(AForm const & Aform)
{
	try
	{
		Aform.action(*this);
		std::cout << *this << " executed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " cannot execute " << Aform.getName() << " because " << e.what() << std::endl;
	}
}
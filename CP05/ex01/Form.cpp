/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:20:24 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:01 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

/* Constructor */
Form::Form() : _name("Default"), _signe(false), _gradeSigned(1), _gradeExe(1)
{
	std::cout << "Form Default constructor" << std::endl;
}

Form::Form(const Form& src) : _name(src._name), _signe(src._signe), _gradeSigned(src._gradeSigned), _gradeExe(src._gradeExe)
{
	std::cout << "Copy Form constructor" << std::endl;
}

Form::Form(std::string name , bool signe, int gradeSigned, int gradeExe) : _name(name), _signe(signe), _gradeSigned(gradeSigned), _gradeExe(gradeExe)
{
	if (gradeSigned < 1 || gradeExe < 1)
		throw Form::GradeTooHighException();
	else if (gradeSigned > 150 || gradeExe > 150)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form " << name << " constructor" << std::endl;
}

/* Destructor */
Form::~Form()
{
	std::cout << "Destructor Form called" << std::endl;
}

/* Overload */
Form& Form::operator=(const Form& rhs)
{
	(void)rhs;
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << " , is ";
	if (rhs.getSigne() == true)
		o << "signed. ";
	else
		o << "is not signed. ";
	o << "grade to sign = " << rhs.getGradeSigned() << " and grade to exec = " << rhs.getGradeExe() << std::endl;
	return o;
}

/* Getters */
std::string Form::getName() const
{
	return this->_name;
}

int Form::getGradeSigned() const
{
	return this->_gradeSigned;
}

int Form::getGradeExe() const
{
	return this->_gradeExe;
}

bool	Form::getSigne() const
{
	return this->_signe;
}

/* Functions */
void Form::beSigned(const Bureaucrat& employe)
{
	if (!this->_signe)
	{
		if (employe.getGrade() <= this->_gradeSigned)
			this->_signe = true;
		else
			throw Form::GradeTooLowException();
	}
}

/* Execptions */
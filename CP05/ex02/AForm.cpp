/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:16:24 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 10:59:19 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

/* Constructor */
AForm::AForm() : _name("Default"), _signe(false), _gradeSigned(1), _gradeExe(1)
{
	std::cout << "AForm Default constructor" << std::endl;
}

AForm::AForm(const AForm& src)
: _name(src._name), _signe(src._signe), _gradeSigned(src._gradeSigned), _gradeExe(src._gradeExe)
{
	std::cout << "Copy AForm constructor" << std::endl;
}

AForm::AForm(std::string name , bool signe, int gradeSigned, int gradeExe)
: _name(name), _signe(signe), _gradeSigned(gradeSigned), _gradeExe(gradeExe)
{
	if (gradeSigned < 1 || gradeExe < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSigned > 150 || gradeExe > 150)
		throw AForm::GradeTooLowException();
	else
		std::cout << "AForm " << name << " constructor" << std::endl;
}

/* Destructor */
AForm::~AForm()
{
	std::cout << "Destructor AForm called" << std::endl;
}

/* Overload */
AForm& AForm::operator=(const AForm& rhs)
{
	(void)rhs;
	return *this;
}

std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName() << ", is ";
	if (rhs.getSigne() == true)
		o << "signed. ";
	else
		o << "is not signed. ";
	o << "Grade to sign = " << rhs.getGradeSigned() << " and Grade to exec = " << rhs.getGradeExe();
	return o;
}

/* Getters */
std::string AForm::getName() const
{
	return this->_name;
}

int AForm::getGradeSigned() const
{
	return this->_gradeSigned;
}

int AForm::getGradeExe() const
{
	return this->_gradeExe;
}

bool	AForm::getSigne() const
{
	return this->_signe;
}


/* Functions */
void AForm::beSigned(const Bureaucrat& employe)
{
	if (this->_signe == false)
	{
		if (employe.getGrade() <= this->_gradeSigned)
			this->_signe = true;
		else
			throw AForm::GradeTooLowException();
	}
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigne() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExe())
		throw AForm::GradeTooLowException();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:17:44 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 15:39:48 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

/* Constructor */
PresidentialPardonForm::PresidentialPardonForm() : AForm("pardon", false, 25, 5), _target("Default")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("pardon", false, 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src), _target(src._target)
{
	
}

/* Operator */
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	this->AForm::operator=(rhs);
	return *this;
}

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

/* Functions */
void PresidentialPardonForm::action(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


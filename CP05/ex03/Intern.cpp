/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:18:36 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 16:04:33 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/* Constructor */
Intern::Intern()
{
	std::cout << "Intern Default constructor" << std::endl;
}

Intern::Intern(const Intern& src)
{
	(void)src;
	std::cout << "Copy Intern constructor" << std::endl;
}

/* Destructor */
Intern::~Intern()
{
	std::cout << "Destructor Intern called" << std::endl;
}

/* Overload */
Intern& Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return *this;
}

/* Functions */
AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
	std::string formNames[3] = {"shrubbery", "robotomy", "presidential"};
	int i = 0;
	while (i < 3 && formNames[i] != name)
		i++;
	AForm* tmp = NULL;
	switch (i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			break;
		case 1:
			tmp = new RobotomyRequestForm(target);
			break;
		case 2:
			tmp = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidFormException();
	}
	std::cout << "Intern creates " << name << std::endl;
	return (tmp);
}

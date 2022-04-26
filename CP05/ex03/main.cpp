/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:01 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 16:18:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main () 
{
	Bureaucrat Micheal("Micheal", 1);
	Bureaucrat Jim("Jim", 72);
	Intern Rayan;
	AForm* P_form;
	AForm* R_form;
	AForm* S_form;
	P_form = Rayan.makeForm("presidential", "Obama");
	R_form = Rayan.makeForm("robotomy", "Lincoln");
	S_form = Rayan.makeForm("shrubbery", "Tree_file");

	std::cout << std::endl << " ---- Lvl Tests ---- " << std::endl;
	try
	{
		P_form = Rayan.makeForm("Sheeeshhh", "Obama");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jim.executeAForm(*P_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		P_form->execute(Jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Jim signs Form" << std::endl;
	Jim.signAForm(*R_form);
	try
	{
		Jim.executeAForm(*R_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " ---- Actions Tests ---- " << std::endl;
	Micheal.signAForm(*P_form);
	Micheal.signAForm(*R_form);
	Micheal.signAForm(*S_form);
	Micheal.executeAForm(*P_form);
	Micheal.executeAForm(*R_form);
	Micheal.executeAForm(*S_form);
	std::cout << std::endl;	
	
	delete P_form;
	delete R_form;
	delete S_form;
}
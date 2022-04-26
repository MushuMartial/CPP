/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:01 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 16:04:50 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main () 
{
	Bureaucrat Micheal("Micheal", 1);
	Bureaucrat Jim("Jim", 72);
	PresidentialPardonForm P_form("Obama");//LVL 25, 5
	RobotomyRequestForm R_form("Lincoln");//LVL 72, 45
	ShrubberyCreationForm S_form("Tree_file");//LVL 145, 137

	std::cout << std::endl << " ---- Lvl Tests ---- " << std::endl;
	try
	{
		Jim.executeAForm(P_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		P_form.execute(Jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Jim signs Form" << std::endl;
	Jim.signAForm(R_form);
	try
	{
		Jim.executeAForm(R_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << " ---- Actions Tests ---- " << std::endl;
	Micheal.signAForm(P_form);
	Micheal.signAForm(R_form);
	Micheal.signAForm(S_form);
	Micheal.executeAForm(P_form);
	Micheal.executeAForm(R_form);
	Micheal.executeAForm(R_form);
	Micheal.executeAForm(R_form);
	Micheal.executeAForm(S_form);
	std::cout << std::endl;	
}
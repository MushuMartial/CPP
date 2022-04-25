/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:01 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/25 18:10:29 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Micheal("Micheal", 1);
	Bureaucrat Jim("Jim", 150);
	Form form1("form1", false, 100, 50);
	Form form2("form2", false, 1, 1);

	std::cout << std::endl << "---- Max and min Test ----" << std::endl;
	try
	{
		Form form_test("form1", false, 155, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form_test("form1", false, 100, -50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- BeSigned Test ----";
	try
	{
		std::cout << std::endl;
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl << std::endl;
	
		std::cout << "Micheal will sign " << std::endl;
		form1.beSigned(Micheal);
		std::cout << "Jim will sign " << std::endl;
		form2.beSigned(Jim);// Jim Not good level
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- SignForm Test ----" << std::endl;
	Micheal.signForm(form1);
	Jim.signForm(form2);// Jim Not good level
	std::cout << std::endl;
	
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl << std::endl;
	
	Micheal.signForm(form2);
	std::cout << std::endl;

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl << std::endl;
	
}
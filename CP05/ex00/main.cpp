/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:01 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/25 17:12:20 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Micheal("Micheal", 2);
	Bureaucrat Jim("Jim", 149);
	std::cout << std::endl;

	try
	{
		Bureaucrat Jim("Jim", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Jim("Jim", -120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
		std::cout << std::endl;
		
		Micheal.incrementGrade();
		Jim.decrementGrade();
		std::cout << std::endl;
		
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
		std::cout << std::endl;
		
		Micheal.incrementGrade();//Execptions Tro
		Jim.decrementGrade();
		std::cout << std::endl;
		
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
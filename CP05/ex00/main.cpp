/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:01 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/21 11:06:21 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Micheal("Micheal", 2);
	Bureaucrat Jim("Jim", 149);

	try
	{
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
		Micheal.incrementGrade();
		Jim.decrementGrade();
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
		Micheal.incrementGrade();
		Jim.decrementGrade();
		std::cout << Micheal << std::endl;
		std::cout << Jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:43:41 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/04 15:33:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <list>
#include <array>

int main()
{
	std::cout << "---- Pdf Tests -----" << std::endl;
	{
		Span sp = Span(5);
	
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = "  << sp.longestSpan() << std::endl;
	}
	
	std::cout << std::endl << "---- My Tests -----" << std::endl;
	{
		std::cout << "test 10000 numbers :"<< std::endl;
		try
		{
			Span test(10000);
			for (int i = 1; i <= 9999; i++)
				test.addNumber(i);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		std::cout << std::endl << "test max size :"<< std::endl;
		try
		{
			Span test(3);
			test.addNumber(20000);
			test.addNumber(20000);
			test.addNumber(20000);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl << "test size 1 :"<< std::endl;
		try
		{
			Span test(1);
			test.addNumber(20000);

			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl << "test range iterator :"<< std::endl;
		try
		{
			Span test(20);
			test.addNumber(100);

			std::vector<int> vec(10, 20);
		
			test.addNumber2(vec.begin(), vec.begin() + 2);
			
			std::cout << "Shortest span = " << test.shortestSpan() << std::endl;
			std::cout << "Longest span = "  << test.longestSpan() <<std::endl;
			std::cout << "vec : ";
			for (size_t i = 0; i < 3; i++)
			{
				std::cout << test.getVector(i) << " ";
			}
			std::cout  << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}

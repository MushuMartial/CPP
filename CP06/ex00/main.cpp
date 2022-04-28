/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:19:55 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/28 15:57:40 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Need one argument." << std::endl;
	}
	else
	{
		Scalar number(argv[1]);
		try
		{
			std::cout << "char: " << number.getChar() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: " << number.getInt() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: " << number.getFloat() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: " << number.getDouble() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	return 0;
}
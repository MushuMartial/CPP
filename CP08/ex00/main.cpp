/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:27:47 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/03 13:57:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::cout << " ---- Containers ----- " << std::endl;
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 10; i++)
		vector.push_back(i);
	for (int i = 0; i <= 10; i++)
		list.push_back(i);
	
	/* Print Variables */
	std::cout << "Vector: ";
	for (std::vector<int>::iterator i = vector.begin(); i != vector.end(); ++i)
    	std::cout << *i << ' ';
	std::cout << std::endl;
	std::cout << "List: ";
	for (std::vector<int>::iterator i = vector.begin(); i != vector.end(); ++i)
    	std::cout << *i << ' ';
	std::cout << std::endl;
	
	std::cout << std::endl << "---- Tests -----" << std::endl;
	try
	{
		std::vector<int>::iterator it_vector = easyfind(vector, 2);
		std::cout << "Vector starting at " << *it_vector << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator it_vector = easyfind(vector, 12);
		std::cout << "Vector starting at " << *it_vector << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator it_list = easyfind(list, 2);
		std::cout << "List starting at " << *it_list<< std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator it_list = easyfind(list, 12);
		std::cout << "List starting at " << *it_list << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
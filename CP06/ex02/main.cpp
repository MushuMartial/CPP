/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:25:48 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 15:45:10 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base* generate();
void identify(Base* p);
void identify(Base& p);

int main ()
{
	srand(time(NULL));
  	Base* ptr = generate();
	std::cout << " pointer" << std::endl;
	Base* tmp = generate();
	Base& ref = *tmp;
	std::cout << " reference" << std::endl;

	identify(ptr);
	identify(ref);

	delete ptr;
	delete tmp;
}

Base* generate()
{
    int	num = rand() % 3;
	
	std::cout << "generated: ";
	switch (num)
	{
		case 0:
			std::cout << "A class";
			return ( new A );
		case 1:
			std::cout << "B class";
			return ( new B );
		default:
			std::cout << "C class";
			return ( new C );
	}
	
}

void identify( Base* p )
{
	std::cout << "Identify Class by pointer: ";
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "None" << std::endl;
    return ;
}

void identify(Base& p)
{
    try
	{
		std::cout << "Identify Class by reference: ";
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:47:31 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/07 19:15:11 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"
#include <string>

/* Constructor */
Harl::Harl()
{
	
}

/* Destructor */
Harl::~Harl()
{
	
}

void Harl::complain(std::string level)
{
	int i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*array_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (i = 0; i < 4; i++)
    {
        if (!levels[i].compare(level))
			break;
    }
	switch (i)
    {
        case (0):
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*array_ptr[0])();
        case (1):
            std::cout << "[ INFO ]" << std::endl;
            (this->*array_ptr[1])();
        case (2):
            std::cout << "[ WARNING ]" << std::endl;
            (this->*array_ptr[2])();
        case (3):
            std::cout << "[ ERROR ]" << std::endl;
            (this->*array_ptr[3])();
        default:
            break ;
    }
}

void Harl::debug()
{
	std::cout << "This is debug level." << std::endl;
}

void Harl::info()
{
	std::cout << "This is info level." << std::endl;
}

void Harl::warning()
{
	std::cout << "This is warning level." << std::endl;
}

void Harl::error()
{
	std::cout << "This is error level." << std::endl;
}

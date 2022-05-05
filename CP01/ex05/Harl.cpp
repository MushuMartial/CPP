/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:27:23 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/08 13:00:04 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

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
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*array_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            (this->*array_ptr[i])();
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

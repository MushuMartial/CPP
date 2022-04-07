/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:46:58 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/07 19:04:02 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	class Harl karen;
	std::string level;
	
	if (argc == 2)
		level = argv[1];

	if (argc != 2)
		std::cout << "Karen give only one arg..." << std::endl;
	else if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		karen.complain(level);
	return (0);
}
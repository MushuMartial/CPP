/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:06:33 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 12:11:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 100, 0);
	ScavTrap clap2("ScavChad");
	
	std::cout << std::endl << "----- Clap1 test ----- " << std::endl;
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	std::cout << "Clap energy = " << clap1.getEP() << std::endl;
	std::cout << "Clap health = " << clap1.getHP() << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");
	clap1.takeDamage(150);
	//clap1.guardGate(); //Doesn t exist in this class
	std::cout << "Clap1 died." << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);

	std::cout << std::endl << "----- Clap2 test ----- " << std::endl;
	clap2.attack("Sigma");
	clap2.takeDamage(50);
	std::cout << "Clap energy = " << clap2.getEP() << std::endl;
	std::cout << "Clap health = " << clap2.getHP() << std::endl;
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.attack("Sigma");
	clap2.guardGate();
	clap2.takeDamage(150);
	std::cout << "Clap2 died." << std::endl;
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.guardGate();
	std::cout << std::endl;
	
}

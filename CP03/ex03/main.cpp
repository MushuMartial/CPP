/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:06:33 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 13:59:17 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 10, 0);
	ScavTrap clap2("ScavChad");
	FragTrap clap3("FragMcqueen");
	DiamondTrap clap4("DiamondJosuke");
	
	std::cout << std::endl << "----- Clap1 test ----- " << std::endl;
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	std::cout << "Clap energy = " << clap1.getEP() << std::endl;
	std::cout << "Clap health = " << clap1.getHP() << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");

	std::cout << std::endl << "----- Clap2 test ----- " << std::endl;
	clap2.attack("Sigma");
	clap2.takeDamage(50);
	std::cout << "Clap energy = " << clap2.getEP() << std::endl;
	std::cout << "Clap health = " << clap2.getHP() << std::endl;
	clap2.attack("Sigma");
	clap2.beRepaired(50);
	clap2.attack("Sigma");
	clap2.guardGate();
	

	std::cout << std::endl << "----- Clap3 test ----- " << std::endl;
	clap3.attack("Sigma");
	clap3.takeDamage(50);
	std::cout << "Clap energy = " << clap3.getEP() << std::endl;
	std::cout << "Clap health = " << clap3.getHP() << std::endl;
	clap3.attack("Sigma");
	clap3.beRepaired(50);
	clap3.attack("Sigma");
	clap3.highFivesGuys();
	std::cout << std::endl;
	
	
	std::cout << std::endl << "----- Clap4 test ----- " << std::endl;
	std::cout << "Clap4 energy = " << clap4.getEP() << std::endl;
	std::cout << "Clap4 health = " << clap4.getHP() << std::endl;
	clap1.attack("Sigma");
	clap2.attack("Sigma");
	clap3.attack("Sigma");
	clap4.attack("Sigma");
	
	std::cout << std::endl;
	clap1.takeDamage(50);
	clap2.takeDamage(50);
	clap3.takeDamage(50);
	clap4.takeDamage(50);
	std::cout << "Clap4 energy = " << clap4.getEP() << std::endl;
	std::cout << "Clap4 health = " << clap4.getHP() << std::endl;
	
	std::cout << std::endl;
	clap1.beRepaired(50);
	clap2.beRepaired(50);
	clap3.beRepaired(50);
	clap4.beRepaired(50);

	std::cout << std::endl;
	clap2.guardGate();
	clap4.guardGate();

	std::cout << std::endl;
	clap3.highFivesGuys();
	clap4.highFivesGuys();
	
	std::cout << std::endl;
	clap4.whoAmI();
	std::cout << std::endl;
	clap4.takeDamage(150);
	std::cout << "Clap4 died." << std::endl;
	clap4.guardGate();
	clap4.attack("Sigma");
	std::cout << std::endl;
	clap4.whoAmI();
	std::cout << std::endl;
}

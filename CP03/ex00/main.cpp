/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:10:44 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 10:58:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Chad", 100, 100, 100);
	
	clap1.attack("Sigma");
	clap1.takeDamage(50);
	clap1.attack("Sigma");
	clap1.beRepaired(50);
	clap1.attack("Sigma");
	clap1.takeDamage(150);
	std::cout << "ClapTrap is dead now." << std::endl;
	clap1.attack("Sigma");
	clap1.beRepaired(50);
}

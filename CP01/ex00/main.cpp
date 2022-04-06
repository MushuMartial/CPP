/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:39 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 11:06:46 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	std::cout << "randomchump is ";
	randomChump("zombie_chump");
	
	std::cout << "Malloced Zombie is ";
	Zombie* zombie1 = newZombie("Chad Zombie");
	
	delete zombie1;
	//(void)(zombie1);
	//system("leaks zombie");
	return (0);
}
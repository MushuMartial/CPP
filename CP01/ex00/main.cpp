/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:39 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/08 11:19:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	std::cout << "randomchump is ";
	randomChump("zombie_chump"); //stack

	//std::cout << "heap zombie = " << zombie2 << std::endl;
	std::cout << "Malloced Zombie is ";
	Zombie* zombie1 = newZombie("Chad Zombie"); //heap dynamic
	
	delete zombie1;
	//(void)(zombie1);
	//system("leaks zombie");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:39 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/05 15:53:23 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie zombie1("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");
	delete zombie2;
}

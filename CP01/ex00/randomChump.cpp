/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:45 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/08 11:19:20 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name)
{
	Zombie zombie(name);

	//std::cout << "randomchump on heap is ";
	//Zombie* zombie2 = new Zombie(name);
	//delete zombie2;
}
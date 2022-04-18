/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:16 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 15:37:06 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "----- Good Animals -----" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << std::endl;
		std::cout << "Type = " << j->getType() << " " << std::endl;
		std::cout << "Type = " << i->getType() << " " << std::endl;
		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << "----- Wrong Animals -----" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
	
		std::cout << std::endl;
		std::cout << "Type = " << j->getType() << " " << std::endl;
		std::cout << "Type = " << i->getType() << " " << std::endl;
		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	return (0);
}
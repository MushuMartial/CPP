/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:16 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:15:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Deep copy    : Animal* meta = new Animal();
	// Shallow copy : Animal* meta(new Animal());
	std::cout << "----- PDF Test -----" << std::endl;
	{
		const Animal* meta = new Animal();
		//const Animal* dave = meta;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << std::endl;
		/*std::cout << "Type = " << meta->getType() << " " << std::endl;
		std::cout << "Type = " << dave->getType() << " " << std::endl;
		meta->setType("hello");
		std::cout << "Type = " << meta->getType() << " " << std::endl;
		std::cout << "Type = " << dave->getType() << " " << std::endl;*/
		
		delete meta;
		delete j;
		delete i;
		//system("leaks Brain");
	}
	std::cout << std::endl << "----- My Test -----" << std::endl;
	{
		Animal* animals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << std::endl;
		}
		Dog dog_copy(*(Dog *)animals[0]);
		Cat cat_copy(*(Cat *)animals[1]);
		std::cout << std::endl;

		std::cout << dog_copy.getBrain()->getIdea(2) << std::endl;
		std::cout << cat_copy.getBrain()->getIdea(2) << std::endl;
		std::cout << dog_copy.getBrain()->getIdea(45) << std::endl;
		std::cout << cat_copy.getBrain()->getIdea(45) << std::endl;
		std::cout << std::endl;
		
		for (int i = 0; i < 4; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
		//system("leaks Brain");
	}
	return (0);
}
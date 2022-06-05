/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:16 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 14:46:06 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "----- PDF Test -----" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << std::endl;
		
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
		Dog *dog_ptr((Dog *)animals[0]);
		Cat *cat_ptr((Cat *)animals[1]);
		std::cout << std::endl;

		std::cout << dog_ptr->getBrain()->getIdea(2) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(2) << std::endl;
		std::cout << dog_ptr->getBrain()->getIdea(45) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(45) << std::endl;
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

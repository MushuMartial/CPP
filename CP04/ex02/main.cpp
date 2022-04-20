/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:16 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 14:52:20 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Deep copy    : AAnimal* meta = new AAnimal();
	// Shallow copy : AAnimal* meta(new AAnimal());
	std::cout << std::endl << "----- My Test -----" << std::endl;
	{
		//AAnimal meta = new AAnimal(); //Does not work abstract
		AAnimal* AAnimals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				AAnimals[i] = new Dog();
			else
				AAnimals[i] = new Cat();
			std::cout << std::endl;
		}
		Dog *dog_ptr((Dog *)AAnimals[0]);
		Cat *cat_ptr((Cat *)AAnimals[1]);
		std::cout << std::endl;

		std::cout << dog_ptr->getBrain()->getIdea(2) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(2) << std::endl;
		std::cout << dog_ptr->getBrain()->getIdea(45) << std::endl;
		std::cout << cat_ptr->getBrain()->getIdea(45) << std::endl;
		std::cout << std::endl;
		
		for (int i = 0; i < 4; i++)
		{
			delete AAnimals[i];
			std::cout << std::endl;
		}
		//system("leaks Brain");
	}
	return (0);
}
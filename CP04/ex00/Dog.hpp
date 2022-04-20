/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:49 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:15:18 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
	//Constructor
		Dog();
		Dog(const Dog& src); //constructor copy
		Dog(std::string type);
		
	//Destructor
		~Dog();
		
	//Overload
		Dog& operator=(const Dog& rhs);
		
	//Getters
		std::string getType() const;
	
	//Functions
		void makeSound() const;
	
};  


#endif
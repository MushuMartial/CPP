/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:49 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 16:04:21 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

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
		Brain* getBrain() const;
	
	//Functions
		void makeSound() const;
	
	private:
		Brain* _brain;
};  


#endif
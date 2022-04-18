/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:01:59 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
	//Constructor
		Animal();
		Animal(const Animal& src); //constructor copy
		Animal(std::string type);
		
	//Destructor
		virtual ~Animal();
		
	//Overload
		Animal& operator=(const Animal& rhs);
		
	//Getters
		std::string getType() const;
	
	//Functions
		virtual void makeSound() const;
	
	protected:
		std::string _type;
};  


#endif
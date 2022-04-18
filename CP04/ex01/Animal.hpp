/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:15:06 by tmartial         ###   ########.fr       */
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
		//void setType(std::string type);
	
	//Functions
		virtual void makeSound() const;

	protected:
		std::string _type;
};  


#endif
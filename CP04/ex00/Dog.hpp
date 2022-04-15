/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:49 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:21:48 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src); //constructor copy
		Dog(std::string name);
		~Dog();
		
		Dog& operator=(const Dog& rhs);
		
		/* Getters */
	private:
			
};  


#endif
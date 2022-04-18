/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:15:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
	//Constructor
		Cat();
		Cat(const Cat& src); //constructor copy
		Cat(std::string type);
		
	//Destructor
		~Cat();
		
	//Overload
		Cat& operator=(const Cat& rhs);
		
	//Getters
		std::string getType() const;
	
	//Functions
		void makeSound() const;
	
};

#endif
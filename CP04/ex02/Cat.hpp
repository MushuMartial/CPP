/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:26:37 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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
		Brain* getBrain() const;
	
	//Functions
		void makeSound() const;
	
	private:
		Brain* _brain;
};

#endif
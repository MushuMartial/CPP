/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:22:12 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/18 17:22:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
	//Constructor
		AAnimal();
		AAnimal(const AAnimal& src); //constructor copy
		AAnimal(std::string type);
		
	//Destructor
		virtual ~AAnimal();
		
	//Overload
		AAnimal& operator=(const AAnimal& rhs);
		
	//Getters
		std::string getType() const;
		//void setType(std::string type);
	
	//Functions
		virtual void makeSound() const = 0;

	protected:
		std::string _type;
};  


#endif
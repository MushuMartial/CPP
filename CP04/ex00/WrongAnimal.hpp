/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:03:14 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 12:31:12 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
	//Constructor
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src); //constructor copy
		WrongAnimal(std::string type);
		
	//Destructor
		virtual ~WrongAnimal();
		
	//Overload
		WrongAnimal& operator=(const WrongAnimal& rhs);
		
	//Getters
		std::string getType() const;
	
	//Functions
		void makeSound() const;
	
	protected:
		std::string _type;
};  


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:45 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 12:27:43 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	//Constructor
		WrongCat();
		WrongCat(const WrongCat& src); //constructor copy
		WrongCat(std::string type);
		
	//Destructor
		~WrongCat();
		
	//Overload
		WrongCat& operator=(const WrongCat& rhs);
		
	//Getters
		std::string getType() const;
	
	//Functions
		void makeSound() const;
	
};


#endif
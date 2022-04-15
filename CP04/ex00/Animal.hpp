/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:37:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& src); //constructor copy
		Animal(std::string name);
		~Animal();
		
	Animal& operator=(const Animal& rhs);
		
	/* Getters */
		
	private:
		std::string _type;
};  


#endif
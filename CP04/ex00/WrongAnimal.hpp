/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:03:14 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 17:07:33 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src); //constructor copy
		WrongAnimal(std::string name);
		~WrongAnimal();
		
	WrongAnimal& operator=(const WrongAnimal& rhs);
		
	/* Getters */
		
	private:
		std::string _type;
};  


#endif
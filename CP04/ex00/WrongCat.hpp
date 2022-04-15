/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:06:45 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 17:07:03 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& src); //constructor copy
		WrongCat(std::string name);
		~WrongCat();
		
		WrongCat& operator=(const WrongCat& rhs);
		
		/* Getters */
		
		
	private:
			
};  


#endif
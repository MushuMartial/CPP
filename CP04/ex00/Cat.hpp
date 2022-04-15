/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:50:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 16:14:34 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src); //constructor copy
		Cat(std::string name);
		~Cat();
		
		Cat& operator=(const Cat& rhs);
		
		/* Getters */
		
		
	private:
			
};  


#endif
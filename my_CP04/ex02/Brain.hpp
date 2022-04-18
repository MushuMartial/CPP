/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:11 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:01:59 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
	//Constructor
		Brain();
		Brain(const Brain& src); //constructor copy
		Brain(std::string idea);
		
	//Destructor
		~Brain();
		
	//Overload
		Brain& operator=(const Brain& rhs);
		
	//Getters
		const std::string& getIdea(int index) const;
	
	
	private:
		std::string _ideas[100];
};  


#endif
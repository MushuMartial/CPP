/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:11:58 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/20 15:27:02 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
	//Constructor
		Bureaucrat();
		Bureaucrat(const Bureaucrat& src); //constructor copy
		Bureaucrat(std::string name);
		
	//Destructor
		~Bureaucrat();
		
	//Overload
		Bureaucrat& operator=(const Bureaucrat& rhs);
		
	//Getters
		std::string getName() const;
	
	//Functions
		
	
	private:
		std::string const _name;
		int	_grade;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:11:58 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 11:17:45 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
	//Constructor
		Bureaucrat();
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat(std::string name ,int grade);
		
	//Destructor
		~Bureaucrat();
		
	//Overload
		Bureaucrat& operator=(const Bureaucrat& rhs);
		
	//Getters
		std::string getName() const;
		int	getGrade() const;
	
	//Functions
		void incrementGrade();
		void decrementGrade();
		void signAForm(AForm& AForm);
		void executeAForm(AForm const & AForm);

	//Execptions
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()// virtual?
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};
	
	private:
		std::string const _name;
		int	_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
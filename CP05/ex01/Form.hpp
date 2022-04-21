/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:20:17 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:26 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
	//Constructor
		Form();
		Form(const Form& src);
		Form(std::string name , bool signe, int gradeSigned, int gradeExe);
		
	//Destructor
		~Form();
		
	//Overload
		Form& operator=(const Form& rhs);
		
	//Getters
		std::string getName() const;
		int getGradeSigned() const;
		int getGradeExe() const;
		bool	getSigne() const;
	
	//Functions
		void beSigned(const Bureaucrat& employe);

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
		bool		_signe;
		int const	_gradeSigned;
		int const	_gradeExe;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);

#endif
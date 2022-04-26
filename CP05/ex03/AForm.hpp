/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:16:51 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/21 17:16:58 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
	//Constructor
		AForm();
		AForm(const AForm& src);
		AForm(std::string name , bool signe, int gradeSigned, int gradeExe);
		
	//Destructor
		virtual ~AForm();
		
	//Overload
		AForm& operator=(const AForm& rhs);
		
	//Getters
		std::string getName() const;
		int			getGradeSigned() const;
		int			getGradeExe() const;
		bool		getSigne() const;
	
	//Functions
		void beSigned(const Bureaucrat& employe);
		void execute(Bureaucrat const & executor) const;
		virtual void action(const Bureaucrat& executor) const = 0;

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

	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Form not signed");
			}
	};
	
	private:
		std::string const _name;
		bool 		_signe;
		int const	_gradeSigned;
		int const	_gradeExe;
};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:18:38 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/26 16:19:13 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

class Intern
{
	public:
		// Constructor
		Intern();
		Intern(const Intern& src);

		// Destructor
		~Intern();

		Intern& operator=(const Intern& rhs);
		
		class InvalidFormException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("invalid form type");
				}
	};

	AForm* makeForm(const std::string& name, const std::string& target) const;
};

#endif
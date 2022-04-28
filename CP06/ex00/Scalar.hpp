/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:54:40 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/28 14:57:07 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <string>
#include <iostream>

class Scalar
{
	public:
		// Constructors
		Scalar();
		Scalar(std::string string);
		Scalar(const Scalar& src);

		// Operator overload
		Scalar& operator=(const Scalar& rhs);

		// Destructor
		~Scalar();

		// Getters
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;
	/*  int     getIsInt( void ) const;
   		int     getIsChar( void ) const;*/

		class Impossible : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Impossible");
				}
		};

		class NonDisplayable : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Non displayable");
				}
		};

	private:

		std::string	_string;
		char				_charVal;
		int					_intVal;
		float				_floatVal;
		double				_doubleVal;
		int     _isInt;//see
    	int     _isChar;//see
		
};

std::ostream& operator<<(std::ostream& o, const Scalar& rhs);


#endif

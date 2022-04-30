/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:54:40 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 14:54:23 by tmartial         ###   ########.fr       */
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
		int getIntExecption() const;
		float getFloat() const;
		double getDouble() const;

		class Impossible : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("impossible");
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
		char		_charVal;
		int			_intVal;
		float		_floatVal;
		double		_doubleVal;
		
};


#endif

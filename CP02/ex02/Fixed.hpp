/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:29:35 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 11:39:47 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>

class Fixed
{
	public:
		
		Fixed();
		Fixed(int const num);
		Fixed(float const num);
		Fixed(const Fixed& src); //constructor copy
		~Fixed();
		
		// Operateur affectation
		Fixed& operator=(const Fixed& rhs);

		// Overload arithmétiques
		Fixed operator+(const Fixed& rhs);
		Fixed operator-(const Fixed& rhs);
		Fixed operator*(const Fixed& rhs);
		Fixed operator/(const Fixed& rhs);

		// Overload comparaison
		bool operator> (const Fixed& rhs) const;
		bool operator< (const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;
		
		//prefix operators
		Fixed& operator++();		
		Fixed& operator--();
		
		//postfix opertors					
		Fixed operator++(int);				
		Fixed operator--(int);					

		// Getter
		int		getRawBits() const;

		// Setter
		void	setRawBits(int const raw);

		// Functions
		float	toFloat() const;
		int		toInt() const;
		static			Fixed& min(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
		
	private:
		static int const _fraction = 8;
		int	_fixedPoint;
}; 

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
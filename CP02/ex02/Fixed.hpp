/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:29:35 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 17:48:17 by tmartial         ###   ########.fr       */
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
		Fixed operator> (const Fixed& rhs);
		bool operator< (const Fixed& rhs);
		Fixed operator>=(const Fixed& rhs);
		Fixed operator<=(const Fixed& rhs);
		Fixed operator==(const Fixed& rhs);
		Fixed operator!=(const Fixed& rhs);
		
		// Getter
		int		getRawBits() const;

		// Setter
		void	setRawBits(int const raw);

		// Functions
		float	toFloat() const;
		int		toInt() const;
		
	private:
		static int const _fraction = 8;
		int	_fixedPoint;
}; 

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
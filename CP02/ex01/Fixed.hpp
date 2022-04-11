/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:07:26 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 16:01:52 by tmartial         ###   ########.fr       */
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
		
		// Overload
		Fixed& operator=(const Fixed& rhs);
		
		// Getter
		int		getRawBits() const;

		// Setter
		void	setRawBits(int const raw);

		// Functions
		float	toFloat() const;
		int		toInt() const;
		
	private:
		static int const _fraction = 8;
		int	_fixedValue;
}; 

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
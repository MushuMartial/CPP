/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:21:51 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/09 17:19:55 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& src); //constructor copy
		~Fixed();
		
		//Fixed& operator=(const Fixed& rhs);
		
		// Getter
		int getRawBits(void) const;

		// Setter
		void setRawBits(int const raw);
		
	private:
		static int const fraction = 8;
		int _fixedPoint;
};

#endif
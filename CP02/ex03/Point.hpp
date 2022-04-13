/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:55:36 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 12:49:17 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:

	// Constructors/Destructor
		Point();
		Point(const float x, const float y);
		Point(const Point& src);
		~Point();

	// Assignment operator
		Point& operator=(const Point& rhs);

	// Getters
		Fixed const getX(void) const;
		Fixed const getY(void) const;

	private:

		Fixed const _x;
		Fixed const _y;
};

float area(Point const a,  Point const b,  Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
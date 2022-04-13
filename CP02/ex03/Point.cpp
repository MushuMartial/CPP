/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:55:55 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 12:48:28 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include <cmath>

/* constructor */
Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{	
	
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	
}

Point::Point(const Point& src) : _x(src._x), _y(src._y)
{
	
}

/* Destructor */
Point::~Point()
{	
	
}

/* Assignment operator */
Point& Point::operator=(const Point& rhs)
{
	(void)(rhs); //can t change const param
	return *this;
}

/* Getters */
Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:55:55 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 17:55:56 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Point::Point(void)
	: _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y)
	: _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point& copy)
	: _x(copy._x), _y(copy._y)
{
}

Point::~Point(void)
{
}

Point& Point::operator=(const Point& rhs)
{
	(void)rhs;
	std::cout << "Assignment of const variables impossible, values will stay the same as in the default constructor." << std::endl;
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}

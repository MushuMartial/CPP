/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:55:36 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/11 17:55:37 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Point
{
public:

	// Constructors/Destructor
	Point(void);
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);

	// Assignment operator
	Point& operator=(const Point& rhs);

	// Getters
	Fixed const getX(void) const;
	Fixed const getY(void) const;

private:

	Fixed const _x;
	Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:56:04 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 13:33:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

float area(Point const a, Point const b, Point const c)
{
	float aX, aY, bX, bY, cX, cY, ret;

	aX = a.getX().toFloat();
	aY = a.getY().toFloat();
	bX = b.getX().toFloat();
	bY = b.getY().toFloat();
	cX = c.getX().toFloat();
	cY = c.getY().toFloat();
	
	ret = ((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) /2.0);
	if (ret < 0)
		ret *= -1;
	return (ret);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A, A1, A2, A3;

	A  = area(a, b, c);
	A1 = area(point, b, c);
	A2 = area(a, point, c);
	A3 = area(a, b, point);
	
	if (!A1 || !A2 || !A3)
		return false;
	return (A == A1 + A2 + A3);
}

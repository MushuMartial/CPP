/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:54:14 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 13:34:50 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

int main( void )
{
	Point const a(0.0f, 0.0f);   //   /|
	Point const b(0.0f, 2.0f);   //  / |
	Point const c(3.5f, 0.0f);   // /__|
	
	Point const p1(1.0f, 1.0f);
	Point const p2(0.0f, 0.0f);
	Point const p3(3.0f, 2.1f);

	std::cout << "P1 " << (bsp(a, b, c ,p1) ? "is in triangle" : "is not in triangle") << std::endl;
	std::cout << "P2 " << (bsp(a, b, c ,p2) ? "is in triangle" : "is not in triangle") << std::endl;
	std::cout << "P3 " << (bsp(a, b, c ,p2) ? "is in triangle" : "is not in triangle") << std::endl;
}

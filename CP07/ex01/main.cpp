/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:18:16 by tmartial          #+#    #+#             */
/*   Updated: 2022/05/02 13:21:04 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

int main() 
{
	std::cout << "------- My test -------" << std::endl;
	{
		int tab1[] = { 0, 1, 2, 3, 4 };
		unsigned int tab2[] = { 10, 11, 12, 13, 14};

		iter(tab1, 5, multiple);
		iter(tab2, 5, multiple);
	}
	std::cout << std::endl << "------- Test Pdf de Correction -------" << std::endl;
	{
 		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
 		Awesome tab2[5];
	
 		iter(tab, 5, print);
 		iter(tab2, 5, print);
	}
	return (0);
}
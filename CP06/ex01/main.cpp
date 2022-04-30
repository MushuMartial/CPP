/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:58:23 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 15:20:29 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main( void )
{
	Data test("Mushu");

	test.setName("Tim");
	test.setmainSmash("Bowser jr");
	test.setAge(23);
	
	std::cout << "name: " << test.getName() << std::endl;
	std::cout << "main smash: " << test.getmainSmash() << std::endl;
	std::cout << "age: " << test.getAge() << std::endl;

	std::cout << " --- After serialize and deserialize --- " << std::endl;

	uintptr_t output_uintptr = serialize(&test);

	Data* output = deserialize(output_uintptr);

	std::cout << "name: " << output->getName() << std::endl;
	std::cout << "main smash: " << output->getmainSmash() << std::endl;
	std::cout << "age: " << output->getAge() << std::endl;
	return (0);
}
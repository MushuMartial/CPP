/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:35:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 11:38:18 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = " HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "String created is :" << string << std::endl;
	
	std::cout << std::endl;
    std::cout << "String address    = " << &string << std::endl;
    std::cout << "StringPTR address = " << stringPTR << std::endl;
    std::cout << "StringREF address = " << &stringREF << std::endl;

	std::cout << std::endl;
    std::cout << "String value    = " << string << std::endl;
    std::cout << "StringPTR value = " << *stringPTR << std::endl;
    std::cout << "StringREF value = " << stringREF << std::endl;
}
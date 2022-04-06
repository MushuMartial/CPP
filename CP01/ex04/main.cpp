/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:10:05 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 17:28:40 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

//filename s1 s2   replace forbidden

std::string change_output(std::string output, std::string s1, std::string s2)
{
	std::string ret;
	int			pos = 0;
	
	(void)s2;
	pos = output.find(s1) + 1;
	std::cout << pos << std::endl;
	ret = output;
	return ret;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Enter 3 arguments next time." << std::endl;
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream file(filename);
		std::ofstream file2(filename.append(".replace"));
		
		std::string output;

		while(getline(file, output))
		{
			output = change_output(output, s1, s2);
			file2 << output << std::endl;
		}
	}
}

//
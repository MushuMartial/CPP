/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:10:05 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/07 16:25:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

std::string change_output(std::string output, std::string s1, std::string s2)
{
	int			pos = 0;
	
	while ((pos = output.find(s1)) != -1)
	{
		output.erase(pos, s1.length());
		output.insert(pos, s2);
	}
	return (output);
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
		if (file.fail())
		{
			std::cout << "File doesnt exist" << std::endl;
			return (0);
		}
		std::ofstream file2(filename.append(".replace"));
		std::string output;
		
		while(getline(file, output))
		{
			output = change_output(output, s1, s2);
			file2 << output; 
			if (file.eof() == 0) //1 = at the ned of the file
				file2 << std::endl;
		}
	}
	return (0);
}

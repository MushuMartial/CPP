/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:10:05 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/12 18:05:30 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>

std::string change_output(std::string output, std::string s1, std::string s2)
{
	int			pos = 0;
	int			count = 0;
	std::string save = output;
	
	if (s1.length() == 0)
		return (output);
	while ((pos = save.find(s1)) != -1)
	{
		save.erase(pos, s1.length());
		count++;
	}
	while ((pos = output.find(s1)) != -1 && count > 0)
	{
		output.erase(pos, s1.length());
		output.insert(pos, s2);
		count--;
	}
	return (output);
}

int main(int argc, char **argv)
{
	std::string greg;
	
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
		
		if (file.fail()) //if (file.is_open() == 0)
		{
			std::cout << "File doesnt exist or wrong permissions" << std::endl;
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
		file.close();
		file2.close();
	}
	return (0);
}

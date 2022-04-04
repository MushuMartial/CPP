/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:59:48 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/04 17:48:01 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <stdlib.h> /* atoi */
#include "phonebook.hpp"
#include "contact.hpp"

void 		print_contact(Contact contact, int index);
std::string format_str(std::string str);
void		show_contact(Contact contact);
int			check_input(Phonebook *phonebook);

void create_contact(Phonebook *phonebook)
{
	Contact contact;
	std::string input;
	
	std::cout << "Adding a contact :" << std::endl;
	std::cout << "first name = ";
	std::getline(std::cin, input);
	contact.setFirstName(input);
	std::cout << "last name = ";
	std::getline(std::cin, input);
	contact.setLastName(input);
	std::cout << "nickname = ";
	std::getline(std::cin, input);
	contact.setNickname(input);
	std::cout << "phone number = ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);
	std::cout << "secret = ";
	std::getline(std::cin, input);
	contact.setSecret(input);
	std::cout << "Contact Added" << std::endl;
	phonebook->setContact(contact);
}

void print_phonebook(Phonebook *phonebook)
{
	int		i = 0;
	int		num_contact = phonebook->getCount();

	if (num_contact == 0)
		std::cout << "No Contacts" << std::endl;
	else
	{
		std::cout << "----------------- Contact List -----------------" << std::endl;
		while (i < num_contact)
		{
			print_contact(phonebook->getContact(i), i);
			i++;
			std::cout << std::endl;
		}
		if (i == 7)
		{
			print_contact(phonebook->getContact(i), i);
			std::cout << std::endl;
		}
	}
}

void print_contact(Contact contact, int index)
{
	std::cout << "|         " << index << "|";
	std::cout << "|" << format_str(contact.getFirstName()) << "|";
	std::cout << "|" << format_str(contact.getLastName()) << "|";
	std::cout << "|" << format_str(contact.getNickName()) << "|" << std::endl;
}

void	show_contact(Contact contact)
{
	std::cout << "Contact : " << std::endl;
	std::cout << "-First Name : " << contact.getFirstName() << std::endl;
	std::cout << "-Last Name : " << contact.getLastName() << std::endl;
	std::cout << "-Nickname : " << contact.getNickName() << std::endl;
	std::cout << "-Phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "-Secret : " << contact.getSecret() << std::endl;
}

std::string format_str(std::string str)
{
	std::string output;

	if (str.length() > 10)
	{
		str.resize(9);
		str.insert(9, 1, '.');
	}
	else
	{
		str.insert(0, 10 - str.length(), ' ');
	}
	return (str);
}

int check_input(Phonebook *phonebook)
{
	int i = 0;
	std::string input;
	
	std::cout << "Enter index of contact: ";
	std::getline(std::cin, input);
	while (input[i])
	{
		if (isdigit(input[i]) == 0)
			return (0);
		i++;
	}
	if (0 > atoi(input.c_str()) || (atoi(input.c_str()) >= phonebook->getCount() && phonebook->getCount() != 7))
		return (0);
	show_contact(phonebook->getContact(atoi(input.c_str())));
	return (1);
}

int main()
{	
	Phonebook phonebook;
	
	std::string input;
	while (input != "exit")
	{
		std::cout << "Your input is : ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			create_contact(&phonebook);
		}
		else if (input == "SEARCH")
		{
			print_phonebook(&phonebook);
			if (phonebook.getCount() > 0)
			{
				if (check_input(&phonebook) == 0)
					std::cout << "This contact doesnt exist." << std::endl;
			}
		}
		else if (input == "EXIT")
		{
			return (0);
		}
	}
	return (0);
}

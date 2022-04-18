/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:37 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/16 11:15:50 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

/* Constructor */
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea number " + std::to_string(i);
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Copy Brain constructor" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea : " + idea + std::to_string(i);
	std::cout << "Brain " << idea << " constructor" << std::endl;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

/* Overload */
Brain& Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

/* Getters */
const std::string& Brain::getIdea(int index) const
{
	return this->_ideas[index];
}


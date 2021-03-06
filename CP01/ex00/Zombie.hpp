/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:50 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 10:39:26 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
	public:
		Zombie(std::string name);
		~Zombie();
		
		void announce();

		//setters
		void	setName(std::string name);

		//getters
		std::string	getName();

	private:
		std::string _name;
		
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif
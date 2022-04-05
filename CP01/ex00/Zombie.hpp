/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:48:50 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/05 16:56:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
	public:
		Zombie();
		~Zombie();
		
		void announce();
		Zombie* newZombie( std::string name);
		void randomChump( std::string name);

		//setters
		void	setName(std::string name);

		//getters
		std::string	getName();

	private:
		std::string _name;
		
		
};

#endif
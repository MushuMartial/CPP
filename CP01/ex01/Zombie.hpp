/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:14:53 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 11:32:46 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
	public:
		Zombie();
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

Zombie* zombieHorde( int N, std::string name );

#endif
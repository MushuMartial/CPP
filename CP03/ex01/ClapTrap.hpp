/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:12:57 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/13 18:11:05 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& src); //constructor copy
		ClapTrap(std::string name, int PV, int PC, int DMG);
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap& rhs);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		
	private:
		std::string _name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
		
};  


#endif
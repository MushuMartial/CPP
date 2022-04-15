/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:12:57 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/15 13:05:13 by tmartial         ###   ########.fr       */
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
		ClapTrap(std::string name);
		ClapTrap(std::string name, int PV, int PC, int DMG);
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap& rhs);
		
		/* Getters */
		std::string getName() const;
		int			getHP() const;
		int			getEP() const;
		int			getAD() const;
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		
	protected:
		std::string		_name;
		unsigned int	_HP;
		unsigned int	_EP;
		unsigned int	_AD;
		
};  


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:02 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 14:30:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define  SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& src); //constructor copy
		ScavTrap(std::string name);
		ScavTrap(std::string name, int PV, int PC, int DMG);
		~ScavTrap();
		
		ScavTrap& operator=(const ScavTrap& rhs);
		
		void guardGate();
		
	private:
		
		
};  


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:02:43 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 14:02:43 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& src); //constructor copy
		DiamondTrap(std::string name);
		~DiamondTrap();
		
		DiamondTrap& operator=(const DiamondTrap& rhs);

		void whoAmI();
		using ScavTrap::_HP;
		
	private:
		std::string		_name;
		
};  


#endif
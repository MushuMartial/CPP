/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:13:08 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/14 13:59:37 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define  FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& src); //constructor copy
		FragTrap(std::string name);
		FragTrap(std::string name, int PV, int PC, int DMG);
		virtual ~FragTrap();
		
		FragTrap& operator=(const FragTrap& rhs);
		
		void highFivesGuys();
		
	private:
		
		
};  

#endif
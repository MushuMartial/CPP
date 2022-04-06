/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:40:33 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 15:53:51 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
		std::string getName() const;
		void	setName(std::string name);
		void	setWeapon(Weapon& weapon);
		
	private:
		std::string _name;
		Weapon* _weapon;
};
#endif
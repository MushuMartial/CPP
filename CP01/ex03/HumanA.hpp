/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:39:35 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/06 15:36:38 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();
		std::string getName() const;
		void	setName(std::string name);
		
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif
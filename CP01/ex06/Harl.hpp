/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:47:54 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/07 19:05:45 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
    	Harl();
    	~Harl();

    	void complain(std::string level);

	private:
    	void debug();
    	void info();
    	void warning();
    	void error();

};

#endif
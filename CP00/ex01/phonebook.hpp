/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:59:53 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/04 13:27:55 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class Phonebook
{
	public:

		// Constructors & Destructor
		Phonebook();
		~Phonebook();

		// Getters
		Contact getContact(int index) const;
		int		getCount() const;

		// Setters
		void setContact(Contact contact);

	private:
		Contact _contacts[8];
		int		_index;
		int		_count;
};

#endif
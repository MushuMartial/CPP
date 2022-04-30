/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:51:41 by tmartial          #+#    #+#             */
/*   Updated: 2022/04/30 15:15:40 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public:
		// Constructor
		Data();
    	Data(std::string person);
    	Data(const Data& src);
    
		// Destructor
    	~Data();

		// Getter
    	std::string getPerson() const;
		std::string getName() const;
		std::string getmainSmash() const;
		int getAge() const;

		// Setters
		void setName(std::string name);
		void setmainSmash(std::string mainSmash);
		void setAge(int age);
		
		// Operator overload
   		Data&    operator=(const Data& rhs);
		   
	private:
    	std::string _person;
		std::string	_name;
		std::string	_mainSmash;
		int 		_age;
		
    
};

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif
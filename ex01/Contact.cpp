/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:40:58 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/24 09:40:58 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

};

void Contact::set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret, int count)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	this->index = std::to_string(count + 1);
}

void	Contact::first_print()
{
	int	i;

	if (first_name.length() >= 10)
	{
		first_name.resize(9);
		first_name.resize(10, '.');
	}
	if (last_name.length() >= 10)
	{
		last_name.resize(9);
		last_name.resize(10, '.');
	}
	if (nickname.length() >= 10)
	{
		nickname.resize(9);
		nickname.resize(10, '.');
	}
	std::cout << "|";
	i = -1;
	while(++i + index.length() != 10)
		std::cout << " ";
	std::cout << index;
	std::cout << "|";
	i = -1;
	while(++i + first_name.length() != 10)
		std::cout << " ";
	std::cout << first_name;
	std::cout << "|";
	i = -1;
	while(++i + last_name.length() != 10)
		std::cout << " ";
	std::cout << last_name;
	std::cout << "|";
	i = -1;
	while(++i + nickname.length() != 10)
		std::cout << " ";
	std::cout << nickname;
	std::cout << "|" <<std::endl;
}

void	Contact::second_print()
{
	std::cout << "First Name : " << first_name <<std::endl;
	std::cout << "Last Name : " << last_name <<std::endl;
	std::cout << "Nickname : " << nickname <<std::endl;
	std::cout << "Phone Number : " << phone_number <<std::endl;
	std::cout << "Darkest Secret : " << darkest_secret <<std::endl;
}

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
	this->index = count + 1 + '0';
}

void	Contact::first_print()
{
	if (first_name.length() > 10)
	{
		rFirst = first_name;
		rFirst.resize(9);
		rFirst.resize(10, '.');
	}
	if (last_name.length() > 10)
	{
		rLast = last_name;
		rLast.resize(9);
		rLast.resize(10, '.');
	}
	if (nickname.length() > 10)
	{
		rNick = nickname;
		rNick.resize(9);
		rNick.resize(10, '.');
	}
	std::cout << "|";
	for (int i = 0; i + index.length() != 10; i++)
		std::cout << " ";
	std::cout << index;
	std::cout << "|";
	for (int i = 0; i + rFirst.length() != 10; i++)
		std::cout << " ";
	std::cout << rFirst;
	std::cout << "|";
	for (int i = 0; i + rLast.length() != 10; i++)
		std::cout << " ";
	std::cout << rLast;
	std::cout << "|";
	for (int i = 0; i + rNick.length() != 10; i++)
		std::cout << " ";
	std::cout << rNick;
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

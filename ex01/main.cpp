/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:42:47 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/23 20:42:47 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
	PhoneBook pb = PhoneBook();
	std::string str;

	while(1)
	{
		std::cout << "PhoneBook => : ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str == "EXIT")
			return 0;
	}
	return 0;
}

int	PhoneBook::add()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	while(first_name.empty())
	{
		std::cout << "First Name : ";
		std::getline(std::cin, first_name);
		if (first_name.empty())
			std::cout << "Invalid content" <<std::endl;
	}
	while(last_name.empty())
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, last_name);
		if (last_name.empty())
			std::cout << "Invalid content" <<std::endl;
	}
	while(nickname.empty())
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
		if (nickname.empty())
			std::cout << "Invalid content" <<std::endl;
	}
	while(phone_number.empty())
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			std::cout << "Invalid content" <<std::endl;
	}
	while(darkest_secret.empty())
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.empty())
			std::cout << "Invalid content" <<std::endl;
	}
	add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	return 0;
}

int	PhoneBook::search()
{
	std::string	index;

	first_index();
	while(index.empty())
	{
		std::cout << "Enter the contact's index : ";
		std::getline(std::cin, index);
		if (second_index(index))
			break;
		else
		{
			std::cout << "Choose an index between 1 and 8." <<std::endl;
			index = "";
		}
	}
	return 0;
}
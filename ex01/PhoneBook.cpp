/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:41:09 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/24 09:41:09 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	height = false;
};

void	PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	if (count > 7)
	{
		count = 0;
		height = true;
	}
	contact[count].set_contact(first_name, last_name, nickname, phone_number, darkest_secret, count);
	count++;
}

void	PhoneBook::first_index()
{
	int	i;

	i = 0;
	std::cout << "|-------------------------------------------|" <<std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" <<std::endl;
	std::cout << "|-------------------------------------------|" <<std::endl;
	while (i != 8)
	{
		contact[i].first_print();
		std::cout << "|-------------------------------------------|" <<std::endl;
		i++;
	}
}

int	PhoneBook::second_index(std::string index)
{
	if (index.size() == 1 && index[0] >= '1' && index[0] <= '8')
		contact[index[0] - 1 - '0'].second_print();
	else
		return 0;
	return 1;
}

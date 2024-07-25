/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:30:55 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/24 09:30:55 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
			PhoneBook();
			int		add();
			int		search();
			void	add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
			void	first_index();
			int		second_index(std::string index);
	private:
			Contact		contact[8];
			int			count;
			bool		height;
};

#endif
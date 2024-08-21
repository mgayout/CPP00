/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:31:06 by mgayout           #+#    #+#             */
/*   Updated: 2024/07/24 09:31:06 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
			Contact();
			void	set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret, int count);
			void	first_print();
			void	second_print();
	private:
			std::string first_name;
			std::string	rFirst;
			std::string last_name;
			std::string	rLast;
			std::string nickname;
			std::string	rNick;
			std::string phone_number;
			std::string darkest_secret;
			std::string index;
};

#endif
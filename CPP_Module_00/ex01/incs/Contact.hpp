/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:23:19 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:36:21 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define MAX_FIELD		5

# define FIRST_NAME		0
# define LAST_NAME		1
# define NICKNAME		2
# define PHONE_NUMBER		3
# define DARKEST_SECRET		4

#include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	int		add(void);
	std::string	get_value(int i);
	void		search(void);
	~Contact();

private:
	std::string	_contact[MAX_FIELD];

	int		add_contact(std::string *contact, int i);
	void		check_valid_input(std::string *contact, int i);
	void		show_input(void);
};

#endif

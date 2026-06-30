/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:06:59 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 01:07:33 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACT		8

#include <iostream>
#include <string>
#include <iomanip>
#include "./Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	int		add(void);
	int		search(void);
	~PhoneBook();

private:
	int		_num_contact;
	Contact		_Contact[MAX_CONTACT];

	void		show_phonebook_list(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:46:44 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/01 23:49:43 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	std::string	get_zombie_name();
	void		announce(void);
	~Zombie();

private:
	std::string	_name;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:21:40 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:26:07 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "./Weapon.hpp"

class	HumanB
{
public:
	HumanB();
	HumanB(std::string name);
	void		setWeapon(Weapon &weapon);
	void		attack(void);
	~HumanB();

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif

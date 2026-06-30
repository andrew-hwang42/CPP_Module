/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:21:33 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:26:03 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include <iostream>
#include "./Weapon.hpp"

class	HumanA
{
public:
	HumanA(Weapon& weapon);
	HumanA(std::string name, Weapon& weapon);
	void		attack(void);
	~HumanA();

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif

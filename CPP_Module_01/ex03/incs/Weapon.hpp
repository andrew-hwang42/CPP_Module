/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 02:21:19 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:21:22 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	const std::string&	getType(void);
	void			setType(std::string type);
	~Weapon();

private:
	std::string	_type;
};

#endif

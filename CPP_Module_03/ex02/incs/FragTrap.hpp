/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 06:22:31 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 06:35:04 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& scavtrap);
	FragTrap& operator=(const FragTrap& scavtrap);
	~FragTrap();

	void		attack(const std::string &target);
	void		highFivesGuys(void);
private:
	FragTrap();
};

#endif

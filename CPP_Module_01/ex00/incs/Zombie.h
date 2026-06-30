/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 01:45:54 by ahwang            #+#    #+#             */
/*   Updated: 2026/06/30 02:05:32 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include "./Zombie.hpp"

void		randomChump(std::string name);
Zombie		*newZombie(std::string name);
int		main(int argc, char **argv);

#endif

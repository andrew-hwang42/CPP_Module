/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:52:16 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/04 21:51:50 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DIVISION_ERR	-11111

class	Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();

	int		getRawBits(void) const;
	void		setRawBits(int const raw);

	float		toFloat(void) const;
	int		toInt(void) const;

	bool		operator>(const Fixed& fixed) const;
	bool		operator<(const Fixed& fixed) const;
	bool		operator>=(const Fixed& fixed) const;
	bool		operator<=(const Fixed& fixed) const;
	bool		operator==(const Fixed& fixed) const;
	bool		operator!=(const Fixed& fixed) const;

	Fixed		operator+(const Fixed &fixed) const;
	Fixed		operator-(const Fixed &fixed) const;
	Fixed		operator*(const Fixed &fixed) const;
	Fixed		operator/(const Fixed &fixed) const;

	Fixed		operator++(int);	// prefix increment: ++i
	Fixed		&operator++(void);	// postfix increment: i++
	Fixed		operator--(int);	// prifix decrement: --i
	Fixed		&operator--(void);	// postfix decrement: i--

	static		Fixed& min(Fixed &l, Fixed &r);
	static const	Fixed& min(const Fixed &l, const Fixed &r);
	static		Fixed& max(Fixed &l, Fixed &r);
	static const	Fixed& max(const Fixed &l, const Fixed &r);
	
private:
	int			_value;
	static const int	_bits = 8;

};

std::ostream&	operator<<(std::ostream &ostream, Fixed const &fixed);

#endif

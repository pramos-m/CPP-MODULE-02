/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:03:07 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/05 11:03:08 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<cmath>
#include	"Fixed.hpp"

// Constructor: Default
Fixed::Fixed( void )
{
	this->_fixp = 0;
}

// Constructor: Constant integer to fixed point
Fixed::Fixed( const int num )
{
	this->_fixp = num << _bitFrac;
}

// Constructor: Constant float to fixed point
Fixed::Fixed( const float num )
{
	this->_fixp = roundf(num * (1 << _bitFrac));
}

// Destructor
Fixed::~Fixed( void )
{
}

// Constructor: Copy
Fixed::Fixed( Fixed& fixp )
{
	*this = fixp;
}

// Constructor; Constant copy
Fixed::Fixed( const Fixed &fixp )
{
	*this = fixp;
}

// Getter: _fixp
int	Fixed::getRawBits( void ) const
{
	return (this->_fixp);
}

// Setter: _fixp
void	Fixed::setRawBits( int const raw )
{
	this->_fixp = raw;
}

// Conversor: Fixed point to integer
int	Fixed::toInt( void ) const
{
	return (this->_fixp >> _bitFrac);
}

// Conversor: Fixed point to float
float	Fixed::toFloat( void ) const
{
	return (this->_fixp / static_cast<float>(1 << _bitFrac));
}

// Operator: Assignation

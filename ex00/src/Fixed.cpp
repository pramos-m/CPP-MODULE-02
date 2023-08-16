/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:31:32 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:31:35 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_intp = 0;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed& fixp )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixp;
}

Fixed&	Fixed::operator=( Fixed& fixp )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixp)
		this->_intp = fixp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member called" << std::endl;
	return (this->_intp);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member called" << std::endl;
	this->_intp = raw;
}

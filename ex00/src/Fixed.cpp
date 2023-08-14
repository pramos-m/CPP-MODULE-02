/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:02:36 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/05 11:02:37 by eralonso         ###   ########.fr       */
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

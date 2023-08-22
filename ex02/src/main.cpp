/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:32:47 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 13:24:49 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/Fixed.hpp"

int main( void ) 
{
	Fixed		a;
	const Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c( 10.3f );
	Fixed		d( 10.3f );
	const Fixed	e( 7.3f );

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;

	std::cout << "min( a, b ): " << Fixed::min( a, b ) << std::endl;

	std::cout << "max( a, b ): " << Fixed::max( a, b ) << std::endl;

	std::cout << "a > b: " << ( a > b ) << std::endl;

	std::cout << "a >= b: " << ( a >= b ) << std::endl;

	std::cout << "a < b: " << ( a < b ) << std::endl;

	std::cout << "a <= b: " << ( a <= b ) << std::endl;

	std::cout << "min( e, b ): " << Fixed::min( e, b ) << std::endl;

	std::cout << "max( e, b ): " << Fixed::max( e, b ) << std::endl;

	std::cout << "c: " << c << std::endl;

	std::cout << "d: " << d << std::endl;

	std::cout << "c > d: " << ( c > d ) << std::endl;

	std::cout << "c >= d: " << ( c >= d ) << std::endl;

	std::cout << "c < d: " << ( c < d ) << std::endl;

	std::cout << "c <= d: " << ( c <= d ) << std::endl;

	std::cout << "c == d: " << ( c == d ) << std::endl;

	std::cout << "c != d: " << ( c != d ) << std::endl;

	std::cout << "c + d: " << c + d << std::endl;

	std::cout << "c - d: " << c - d << std::endl;

	std::cout << "c * d: " << c * d << std::endl;

	std::cout << "c / d: " << c / d << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:32:19 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 13:02:43 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed	b( 10 );
	Fixed	c( 42.42f );
	Fixed	d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer." << std::endl;
	std::cout << "b is " << b.toInt() << " as integer." << std::endl;
	std::cout << "c is " << c.toInt() << " as integer." << std::endl;
	std::cout << "d is " << d.toInt() << " as integer." << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:33:06 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:33:25 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Point.hpp"

Point::Point( void ): _x( Fixed( 0 ) ), _y( Fixed( 0 )) , _z( Fixed( 0 ) ) {}

Point::Point( const float x, const float y ): _x( Fixed( x ) ), _y( Fixed( y ) ), _z( Fixed( 0 ) ) {}

Point::Point( const float x, const float y, const float z ): _x( Fixed( x ) ), _y( Fixed( y ) ), _z( Fixed( z ) ) {}

Point::Point( const Point& p ): _x( Fixed( p.getX() ) ), _y( Fixed( p.getY() ) ), _z( Fixed( p.getZ() ) ) {}

Point::~Point( void ) {}


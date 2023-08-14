/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:03:42 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/05 11:03:43 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Point.hpp"

Point::Point( void ): _x( Fixed( 0 ) ), _y( Fixed( 0 )) , _z( Fixed( 0 ) ) {}

Point::Point( const float x, const float y ): _x( Fixed( x ) ), _y( Fixed( y ) ), _z( Fixed( 0 ) ) {}

Point::Point( const float x, const float y, const float z ): _x( Fixed( x ) ), _y( Fixed( y ) ), _z( Fixed( z ) ) {}

Point::Point( const Point& p ): _x( Fixed( p.getX() ) ), _y( Fixed( p.getY() ) ), _z( Fixed( p.getZ() ) ) {}

Point::~Point( void ) {}


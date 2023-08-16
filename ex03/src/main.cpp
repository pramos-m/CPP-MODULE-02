/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:33:06 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:33:23 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>
#include	"Point.hpp"

#define WIDTH	10
#define HEIGHT	10

bool	bsp( const Point a, const Point b, const Point c, const Point p );

bool	isEqual( const Point p, int x, int y )
{
	return ( p.getX().toInt() == x && p.getY().toInt() == y );
}


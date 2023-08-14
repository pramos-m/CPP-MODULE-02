/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:03:37 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/05 11:03:38 by eralonso         ###   ########.fr       */
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


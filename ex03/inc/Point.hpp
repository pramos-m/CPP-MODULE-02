/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:33:01 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/16 15:33:03 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
# define __POINT_H__

# include	"Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
		Fixed	_z;
	public:
		Point( void );
		Point( const Point& p );
		Point( const float x, const float y );
		Point( const float x, const float y, const float z );
		~Point( void );
		Point&		operator=( const Point& p );
		Point&		operator=( Point& p );
		bool		operator==( const Point& p ) const;
		const Fixed&	getX( void ) const;
		const Fixed&	getY( void ) const;
		const Fixed&	getZ( void ) const;
};

std::ostream&	operator<<( std::ostream& out, Point& p );

#endif

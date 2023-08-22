/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:32:28 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 13:24:24 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include	<iostream>

class Fixed
{
	private:
		int			_fixp;
		static const int	_bitFrac = 8;
	public:
		// Constructor: Default
		Fixed( void );
		// Constructor: Constant int to fixed point
		Fixed( const int num );
		// Constructor: Constant float to fixed point
		Fixed( const float num );
		// Constructor: Copy
		Fixed( Fixed& fixp );
		// Constructor: Constant: Copy
		Fixed( Fixed const &fixp );
		// Destructor
		~Fixed( void );
		// Operator: Assignation

		// Getter: _fixp
		int			getRawBits( void ) const;
		// Setter: _fixp
		void			setRawBits( int const raw );
		// Conversor: Fixed point to float
		float			toFloat( void ) const;
		// Conversor: Fixed point to int
		int			toInt( void ) const;
};



#endif

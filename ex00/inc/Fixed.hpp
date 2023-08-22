/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:12:05 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:59:53 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed
{
	private:
		int			_intp;
		static const int	_bitFrac = 8;
	public:
		Fixed( void );
		Fixed( Fixed& fixp );
		~Fixed( void );
		Fixed&	operator=( Fixed& fixp );
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif

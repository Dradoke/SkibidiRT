/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radtodeg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MV42                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 21:42:42 by MV42              #+#    #+#             */
/*   Updated: 2024/12/21 21:42:42 by MV42             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts radians to degrees.
// Multiplies radians by 180/pi for the conversion.
// Uses 3.14159265358979323846 as the value of pi.
float	ft_radtodeg(float rad)
{
	float		pi;
	float		deg;

	pi = 3.14159265358979323846f;
	deg = rad * (180.0f / pi);
	return (deg);
}

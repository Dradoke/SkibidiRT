/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MV42                                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 21:42:42 by MV42              #+#    #+#             */
/*   Updated: 2024/12/21 21:42:42 by MV42             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *original, size_t size)
{
	size_t	i;
	char	*src;
	char	*dest;

	src = original;
	if (!src)
		return (ft_calloc(size));
	i = 0;
	dest = ft_calloc(size);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	free(src);
	return (dest);
}

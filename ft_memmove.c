/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:40:06 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/21 19:43:36 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (source > destiny)
	{
		ft_memcpy(destiny, source, n);
		return (dest);
	}
	while (n--)
	{
		destiny[n] = source[n];
	}
	return (dest);
}

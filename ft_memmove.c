/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:40:06 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/06 20:55:42 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*d;
	size_t	i;

	*temp = (char *)src;
	while (n--)
	{
		i++;
		*temp++ = *src++;
	}
	*temp-= i;
	d = (char *)dest;
	while (i--)
	{
		*d++ = *temp++;
	}
	return (dest);
}

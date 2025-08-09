/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:32:12 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/09 11:48:43 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sstring;

	sstring = (const unsigned char *)s;
	while (n--)
	{
		if (*sstring == (unsigned char)c)
			return ((void *)sstring);
		sstring++;
	}
	return (NULL);
}

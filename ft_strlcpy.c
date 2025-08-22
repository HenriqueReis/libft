/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:15:54 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/09 17:05:28 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (!size)
		return (srclen);
	size--;
	i = srclen;
	while (size-- && i-- && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (srclen);
}

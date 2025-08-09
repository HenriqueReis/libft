/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:15:54 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/09 17:26:34 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (!size)
		return (srclen + dstlen);
	size--;
	i = srclen;
	dst = dst + dstlen;
	while (size-- && i-- && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	if (size > 0)
		*dst = '\0';
	return (srclen + dstlen);
}	

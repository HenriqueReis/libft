/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:26:15 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/09 15:23:04 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *p;

	p = NULL;
	if (!(c))
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	return (p);
}

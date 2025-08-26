/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:13:09 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/20 19:22:47 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*strdup;

	size = ft_strlen(s) + 1;
	strdup = malloc (size);
	if (strdup == NULL)
		return (NULL);
	ft_memcpy (strdup, s, size);
	return (strdup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:37:11 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/20 20:49:42 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*str;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *) malloc (sizeof(char) * (s1len + s2len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy (str, s1, s1len + 1);
	ft_strlcat (str, s2, s1len + s2len + 1);
	return (str);
}

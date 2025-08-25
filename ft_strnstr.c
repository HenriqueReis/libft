/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 11:05:14 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/25 17:30:08 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	littlelen;

	i = 0;
	littlelen = ft_strlen(little);
	if (!ft_strlen(little))
		return ((char *)big);
	while (big[i] != '\0' && (i + littlelen <= len))
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[j + i] != '\0' && little[j] != '\0')
			{
				if (big[i + j] != little[j])
					break ;
				else if (j == littlelen - 1)
					return ((char *) big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

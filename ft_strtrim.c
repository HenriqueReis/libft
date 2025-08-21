/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 20:56:54 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/20 21:21:13 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	setlen;
	char	*str;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(setlen);

	str = (char *)malloc ((s1-len) + 1);
	STRNSTRN

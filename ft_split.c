/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaciel <hemaciel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 18:55:06 by hemaciel          #+#    #+#             */
/*   Updated: 2025/08/22 20:02:10 by hemaciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wc(const char *s, char c)
{
	int	count;
	int	insideword;

	count = 0;
	insideword = 0;
	while (*s)
	{
		if (*s != c && insideword == 0)
		{
			insideword = 1;
			count++;
		}
		else if (*s == c)
			insideword = 0;
		s++;
	}
	return (count);
}

static void	freesplit(char **split, int filled)
{
	int	i;

	i = 0;
	while (i < filled)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**populate(char **splitted, const char *s, char c, int wordcount)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (i < wordcount)
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		splitted[i] = ft_substr(s, start, j - start);
		if (!splitted[i])
		{
			freesplit(splitted, i);
			return (NULL);
		}
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		wordcount;

	if (!s)
		return (NULL);
	wordcount = wc(s, c);
	splitted = (char **) malloc (sizeof (char *) * (wordcount + 1));
	if (!splitted)
		return (NULL);
	if (!populate(splitted, s, c, wordcount))
		return (NULL);
	return (splitted);
}

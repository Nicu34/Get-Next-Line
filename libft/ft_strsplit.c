/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 15:50:50 by nmuresan          #+#    #+#             */
/*   Updated: 2015/12/12 01:29:36 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_lenght(char const *s, char c, int pos)
{
	size_t	len;

	len = 0;
	while (s[pos] && s[pos] != c)
	{
		++pos;
		++len;
	}
	return (len);
}

static int		number_of_words(char const *s, char c)
{
	int		nb;
	int		i;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			nb++;
		else if (s[i] != c && s[i - 1] == c)
			++nb;
		++i;
	}
	return (nb);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		i;
	int		n;

	new = NULL;
	new = (char**)malloc(sizeof(new) * (number_of_words(s, c) + 1));
	if (new)
	{
		i = 0;
		n = 0;
		while (s[i])
		{
			while (s[i] == c)
				++i;
			if (s[i] != '\0')
			{
				new[n] = ft_strsub(s, i, word_lenght(s, c, i));
				++n;
			}
			while (s[i] && s[i] != c)
				i++;
		}
		new[n] = 0;
	}
	return (new);
}

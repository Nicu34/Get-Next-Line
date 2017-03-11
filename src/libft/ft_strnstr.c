/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 00:35:19 by nmuresan          #+#    #+#             */
/*   Updated: 2015/10/25 01:02:54 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;
	char	*str;

	str = ft_strdup(s1);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == s2[j] && s2[j] != '\0' && i + j < n)
			j++;
		if (s2[j] == '\0')
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}

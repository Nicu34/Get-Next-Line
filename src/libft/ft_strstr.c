/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 15:37:36 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/12 19:50:52 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = ft_strdup(s1);
	i = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char*)(s1 + i));
		else
			i++;
	}
	return (NULL);
}

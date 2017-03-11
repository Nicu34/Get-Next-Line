/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 12:24:49 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:12:36 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	lenght;
	size_t	i;
	char	*new;

	lenght = len + start;
	i = 0;
	new = NULL;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new)
	{
		while (start < lenght)
			new[i++] = s[start++];
		new[i] = '\0';
	}
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:35:54 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/12 12:26:05 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		i;

	new = ft_strdup(s);
	if (!new)
		return (NULL);
	else
	{
		i = 0;
		while (new[i] == ' ' || new[i] == '\t' || new[i] == '\n')
			ft_strcpy(new + i, new + i + 1);
		i = ft_strlen(new) - 1;
		while ((new[i] == ' ' || new[i] == '\t' || new[i] == '\n') && i >= 0)
		{
			new[i] = '\0';
			i--;
		}
		return (new);
	}
}

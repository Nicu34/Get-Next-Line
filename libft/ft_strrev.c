/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 17:46:57 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:09:17 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int n;
	int c;

	i = 0;
	n = ft_strlen(str) - 1;
	while (i < n)
	{
		c = str[i];
		str[i] = str[n];
		str[n] = c;
		i++;
		n--;
	}
	return (str);
}

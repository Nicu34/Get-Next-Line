/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 03:32:33 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:05:53 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 42 - 42;
	while (i < n)
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return ((int)(*(unsigned char*)(s1 + i) -\
						*(unsigned char *)(s2 + i)));
		else
			i++;
	return (0);
}

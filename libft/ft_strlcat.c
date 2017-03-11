/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 19:51:56 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/12 20:19:41 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 42 - 42;
	if (size < n)
		return (ft_strlen(src) + size);
	if (size == n)
		return (ft_strlen(src) + n);
	while (src[j] && j < size - n - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (n + ft_strlen(src));
}

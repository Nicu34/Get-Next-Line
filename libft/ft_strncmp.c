/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 17:44:35 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 21:59:59 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i])
		i++;
	if ((i == n) || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	else
		return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

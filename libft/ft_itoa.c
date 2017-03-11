/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 12:28:38 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:05:30 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		allocation_len(int n)
{
	long	nb;
	int		i;

	i = 0;
	if (n >= 0)
		nb = n;
	else
	{
		nb = -n;
		++i;
	}
	++i;
	nb /= 10;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		x[30];
	char	*new;
	long	nb;
	int		v[2];

	new = (char*)malloc(sizeof(new) * (allocation_len(n) + 1));
	v[0] = 0;
	v[1] = -1;
	nb = n;
	if (n < 0)
	{
		new[v[0]++] = '-';
		nb = -nb;
	}
	x[++v[1]] = nb % 10;
	nb /= 10;
	while (nb)
	{
		x[++v[1]] = nb % 10;
		nb /= 10;
	}
	while (v[1] >= 0)
		new[v[0]++] = x[v[1]--] + 48;
	new[v[0]] = '\0';
	return (new);
}

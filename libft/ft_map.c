/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 17:47:53 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 17:51:34 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *v;
	int i;

	i = 0;
	v = (int*)malloc(sizeof(*tab) * lenght);
	while (i < lenght)
	{
		v[i] = f(tab[i]);
		i++;
	}
	return (v);
}

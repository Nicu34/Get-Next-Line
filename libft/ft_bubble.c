/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 20:53:43 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 21:38:05 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(int *tab, int n, int (*f)(int, int))
{
	int	ok;
	int i;

	ok = 0;
	while (!ok)
	{
		i = 0;
		ok = 1;
		while (i < n - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) == 0)
			{
				ft_swap(tab + i, tab + i + 1);
				ok = 0;
			}
			i++;
		}
	}
}

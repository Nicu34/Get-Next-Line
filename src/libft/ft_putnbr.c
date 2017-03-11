/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 12:26:27 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:19:01 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long lung;

	lung = n;
	if (lung < 0)
	{
		ft_putchar('-');
		lung = -lung;
	}
	if (lung < 10)
		ft_putchar(lung % 10 + 48);
	else
	{
		ft_putnbr(lung / 10);
		ft_putchar(lung % 10 + 48);
	}
}

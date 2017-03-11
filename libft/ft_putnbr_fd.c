/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 12:27:13 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 22:19:28 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long lung;

	lung = n;
	if (lung < 0)
	{
		lung = -lung;
		ft_putchar_fd('-', fd);
	}
	if (lung < 10)
		ft_putchar_fd(lung % 10 + 48, fd);
	else
	{
		ft_putnbr_fd(lung / 10, fd);
		ft_putchar_fd(lung % 10 + 48, fd);
	}
}

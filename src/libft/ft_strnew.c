/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 18:42:43 by nmuresan          #+#    #+#             */
/*   Updated: 2015/10/28 19:11:33 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;

	string = (char*)malloc(sizeof(char) * (size + 1));
	if (!string)
		return (NULL);
	string = ft_memset(string, '\0', size + 1);
	return (string);
}

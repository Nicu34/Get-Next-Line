/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 19:34:22 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 20:45:58 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fct;
	t_list	*new;

	fct = f(lst);
	new = fct;
	if (!new)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		fct->next = f(lst);
		if (fct->next == NULL)
			return (NULL);
		fct = fct->next;
	}
	return (new);
}

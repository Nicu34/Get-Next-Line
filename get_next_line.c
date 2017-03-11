/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:42:04 by nmuresan          #+#    #+#             */
/*   Updated: 2016/01/23 23:15:27 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			**get_file(int const fd)
{
	char	*buff;
	char	*temp;
	int		ret;
	char	**content;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))) || fd < 0)
		return (NULL);
	ret = 1;
	temp = NULL;
	temp = ft_strdup("");
	while (ret > 0)
	{
		ret = read(fd, buff, BUFF_SIZE);
		if (ret <= -1)
			return (NULL);
		if (buff[0] == '\0')
			return (NULL);
		buff[ret] = '\0';
		temp = ft_strjoin(temp, buff);
	}
	content = ft_strsplit_all((char const*)temp, '\n');
	free(buff);
	free(temp);
	return (content);
}

t_file			*lstnew(int filed)
{
	t_file	*new;

	new = NULL;
	new = (t_file*)malloc(sizeof(t_file));
	if (!new)
		return (NULL);
	else
	{
		new->filedesc = filed;
		new->matrix = get_file(filed);
		if (!new->matrix)
			return (NULL);
		new->line = 0;
		new->next = NULL;
	}
	return (new);
}

int				loop_list(t_file **f, char **l, int const fd)
{
	t_file *list;

	list = *f;
	while (list)
	{
		if (list->filedesc == fd)
		{
			if (list->matrix[list->line] != 0)
			{
				*l = ft_strdup((const char*)list->matrix[list->line]);
				list->line += 1;
				return (1);
			}
			else
				return (0);
		}
		list = list->next;
	}
	return (-1);
}

int				add_or_new_element(t_file **f, char **l, int const fd)
{
	t_file *list;
	t_file *aux;

	list = *f;
	if (!list)
		list = lstnew((int)fd);
	else
	{
		aux = lstnew((int)fd);
		aux->next = list;
		list = aux;
	}
	if (!list)
		return (-1);
	*l = ft_strdup((const char*)list->matrix[list->line]);
	if (list->matrix[list->line] == 0 || !l)
		return (0);
	list->line += 1;
	*f = list;
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static	t_file	*f = NULL;
	int				ret;
	char			buff[10];

	if (fd < 0 || BUFF_SIZE < 0 || line == NULL || read(fd, buff, 0) == -1)
		return (-1);
	ret = -1;
	if (f)
		ret = loop_list(&f, line, fd);
	if (ret != -1)
		return (ret);
	else
		ret = add_or_new_element(&f, line, fd);
	return (ret);
}

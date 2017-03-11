/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:31:36 by nmuresan          #+#    #+#             */
/*   Updated: 2016/01/23 23:15:54 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H

# define __GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

int						get_next_line(int const fd, char **line);

typedef struct			s_structura
{
	struct s_structura	*next;
	char				**matrix;
	int					line;
	int					filedesc;
}						t_file;

# define BUFF_SIZE 100

#endif

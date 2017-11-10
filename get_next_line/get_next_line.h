/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:29:27 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:34:50 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define	BUFF_SIZE	9999
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"
typedef	struct	get
{
	char	*save;
	int		max;
}				get;
int	get_next_line(const int fd, char **line);
#endif

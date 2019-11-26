/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:56:09 by bstanton          #+#    #+#             */
/*   Updated: 2019/11/26 21:56:58 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				alreadyRead;
	char			*place;
	static char		*save;

	if (fd < 0 || line == NULL)
		return (-1);
	if (*line == NULL)
		*line = ft_strnew(1);
	while ((alreadyRead = read(fd, buf, BUFF_SIZE)))
	{
		buf[alreadyRead] = '\0';
		if ((place = ft_strchr(buf, '\n')))
		{
			*place = '\0';
			*line = ft_strjoin(*line, buf);
			place++;
			if (*place)
			{
				if (save == NULL)
					save = ft_strnew(1);
				save = ft_strjoin(save, place);
				printf("\n\n%s\n\n%s\n", save, *line);
			}
		}
		if (save != NULL)
		{
			if ((ft_strchr(save, 
		}
		*line = ft_strjoin(*line, buf);
	}
	return (alreadyRead);
}


int main()
{
	int		fd;
	char 	*line;

	fd = open("test", O_RDONLY);
	printf("fd value is %d\n", fd);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	return (0);
}

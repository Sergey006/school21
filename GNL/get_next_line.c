/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:56:09 by bstanton          #+#    #+#             */
/*   Updated: 2019/11/25 22:13:33 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	get_next_line(const int fd, char **line)
{
	static 			*char;
	char			buf[BUFF_SIZE + 1];
	int				alreadyRead;
	char			*s;
	
	if (fd < 0 || line == NULL)
		return (-1);
	while ((alreadyRead = read(fd, buf, BUFF_SIZE))
	{
		buf[alreadyRead] = '\0';
		if (
	}
	if (alreadyRead < 0 || alreadyRead == 0)
		return (alreadyRead);
	*line = s;
	return (alreadyRead);
}


int main()
{
	int		fd;
	int		result;

	fd = open("test", O_RDONLY);
	printf("fd value is [%d]\n", fd);
	/*result = get_next_line(fd, ptr);
	printf("%d", result);*/
	return (0);
}

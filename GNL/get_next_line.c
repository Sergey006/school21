/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:56:09 by bstanton          #+#    #+#             */
/*   Updated: 2019/11/06 20:24:07 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_count(char *s)
{
	int	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return count; 
}

int	get_next_line(const int fd, char **line)
{
	static char		buf[BUFF_SIZE + 1];
	int				lastNull;
	char			*s;
	
	lastNull = read(fd, buf, BUFF_SIZE);
	buf[lastNull] = '\0';
	
	if (!(s = (char*)malloc(sizeof(char) * (ft_count(buf) + 1))))
	{
		return (-1);
	}

	int a = 0;
	while (buf[a])
	{
		s[a] = buf[a];
		a++;
	}

	*line = s;
	return lastNull;
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

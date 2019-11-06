/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:10:42 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/04 14:42:09 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 1024

void	ft_putchar(int out, char c)
{
	write(out, &c, 1);
}

void	ft_putstr(int out, char *s)
{
	while (*s)
	{
		ft_putchar(out, *s);
		s++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		last;

	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((last = read(fd, buf, BUFF_SIZE)))
	{
		buf[last] = '\0';
		ft_putstr(1, buf);
	}
	close(fd);
	return (0);
}

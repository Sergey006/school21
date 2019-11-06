/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:56:09 by bstanton          #+#    #+#             */
/*   Updated: 2019/11/06 19:06:36 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE + 1];
	int		lastNull;

	lastNull = read(fd, buf, BUFF_SIZE);
	buf[last] = '\0';
}

int main()
{
	
	return (0);
}

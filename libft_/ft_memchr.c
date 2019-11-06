/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:25:52 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/11 14:20:06 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	letter;
	size_t			counter;
	unsigned char	*str;

	str = (unsigned char*)s;
	letter = (unsigned char)c;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == letter)
			return (&str[counter]);
		counter++;
	}
	return (NULL);
}

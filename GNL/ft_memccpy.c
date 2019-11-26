/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:43:50 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/11 14:18:06 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s;
	unsigned char	*d;

	ch = (unsigned char)c;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	while (n-- > 0)
	{
		*d = *s;
		if (*s == ch)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}

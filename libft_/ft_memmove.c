/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:05:41 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 19:08:16 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (s == d || !len)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (i++ < len)
			d[len - i] = s[len - i];
	}
	return (dst);
}

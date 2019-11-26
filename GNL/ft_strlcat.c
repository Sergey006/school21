/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:10:51 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 13:42:31 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			length_d;
	size_t			length_s;

	dst = (unsigned char*)d;
	src = (unsigned char*)s;
	length_d = ft_strlen((const char*)d);
	length_s = ft_strlen(s);
	if (size <= length_d)
		return (length_s + size);
	while (*dst && size - 1 > 0)
	{
		dst++;
		size--;
	}
	while (*src && size - 1 > 0)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (length_d + length_s);
}

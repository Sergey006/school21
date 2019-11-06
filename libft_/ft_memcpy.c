/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:44:08 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/11 14:08:17 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	num;
	char	*ds;
	char	*sr;

	if (dst == NULL && src == NULL)
		return (dst);
	num = 0;
	ds = (char*)dst;
	sr = (char*)src;
	while (num < n)
	{
		ds[num] = sr[num];
		num++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:58:49 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/06 14:02:08 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	size_t			n;
	char			*m;
	unsigned char	c;

	n = 0;
	c = (unsigned char)val;
	m = memptr;
	while (n < num)
	{
		m[n] = c;
		n++;
	}
	return (memptr);
}

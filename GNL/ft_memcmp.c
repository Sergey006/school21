/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:37:14 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 13:41:12 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char*)s1;
	a2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*a1 == *a2 && (n > 1))
	{
		a1++;
		a2++;
		if (*a1 != *a2)
			return (*a1 - *a2);
		n--;
	}
	return (*a1 - *a2);
}

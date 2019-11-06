/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:59:13 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 15:04:18 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_eq(unsigned char *l, unsigned char *s, int count)
{
	size_t	i;

	i = 0;
	while (l[i] == s[i] && s[i] && count)
	{
		i++;
		count--;
	}
	if (s[i] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *l, const char *s, size_t len)
{
	unsigned char	*l1;
	unsigned char	*s1;

	if (ft_strlen(s) == 0)
		return ((char*)l);
	l1 = (unsigned char*)l;
	s1 = (unsigned char*)s;
	while (*l1 && len)
	{
		if (ft_eq(l1, s1, len))
			return ((char*)l1);
		l1++;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:21:42 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 14:55:13 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_eq(char *l, char *s)
{
	size_t	i;

	i = 0;
	while (l[i] == s[i] && s[i])
	{
		i++;
	}
	if (s[i] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strstr(const char *l1, const char *s1)
{
	size_t	i;
	char	*l;
	char	*s;

	if (ft_strlen(s1) == 0)
		return ((char *)l1);
	l = (char*)l1;
	s = (char*)s1;
	i = 0;
	while (l[i])
	{
		if (ft_eq(&l[i], s))
			return (&l[i]);
		i++;
	}
	return (NULL);
}

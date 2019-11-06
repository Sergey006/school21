/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:42:34 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/11 13:52:55 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	b;
	size_t			i;
	char			*ptr;
	char			*str;

	ptr = NULL;
	str = (char*)s;
	i = 0;
	b = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == b)
			ptr = &str[i];
		i++;
	}
	if (c == 0)
		ptr = &str[i];
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:10:41 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 17:34:05 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	t;

	if (!s)
		return (NULL);
	if (len + 1 == 0)
		return (NULL);
	if (!(ptr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	t = 0;
	while (s[start] && t < len)
	{
		ptr[t] = s[start];
		t++;
		start++;
	}
	ptr[t] = '\0';
	return (ptr);
}

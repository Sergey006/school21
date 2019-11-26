/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:59:28 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/11 13:52:36 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	letter;
	size_t			i;
	char			*str;

	str = (char*)s;
	i = 0;
	letter = (unsigned char)c;
	if (letter != '\0')
	{
		while (str[i])
		{
			if (str[i] == letter)
				return (&str[i]);
			i++;
		}
	}
	if (letter == '\0')
	{
		while (str[i] != '\0')
		{
			i++;
		}
		return (&str[i]);
	}
	return (NULL);
}

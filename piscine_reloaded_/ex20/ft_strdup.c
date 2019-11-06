/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 09:11:02 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/04 09:23:15 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s)
		return (NULL);
	i = -1;
	while (src[++i])
	{
		s[i] = src[i];
	}
	s[i] = '\0';
	return (s);
}

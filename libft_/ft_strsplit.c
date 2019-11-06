/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:59:46 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/22 16:20:09 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_c(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static void			ft_free_words(char **arr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i++]);
	}
	free(arr);
}

static char			**ft_line(char **arr, const char *s, char c)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (s[i] && n < ft_c(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			start = i;
		while (s[i] != c && s[i])
			end = i++;
		if (!(arr[n] = (char*)malloc(sizeof(char) * (end - start + 2))))
		{
			ft_free_words(arr, n);
			return (NULL);
		}
		arr[n++] = ft_strsub(s, start, end - start + 1);
	}
	arr[n] = 0;
	return (arr);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!s || !(arr = (char**)malloc(sizeof(char*) * (ft_c(s, c) + 1))))
		return (NULL);
	if (!(arr = ft_line(arr, s, c)))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

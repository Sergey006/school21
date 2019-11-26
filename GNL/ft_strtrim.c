/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:27:14 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 13:45:27 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while ((start < end) && (s[start] == ' '
				|| s[start] == '\n' || s[start] == '\t'))
	{
		start++;
	}
	while ((end > start) && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
	{
		end--;
	}
	if (start >= end)
		return (ft_strsub(s, start, 0));
	end++;
	return (ft_strsub(s, start, (end - start)));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:42:02 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/09 15:42:05 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *arr, size_t n)
{
	size_t	k;
	size_t	i;

	i = 0;
	k = 0;
	while (dst[i])
	{
		i++;
	}
	while (arr[k] && (k < n))
	{
		dst[i] = arr[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:43:04 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 13:43:09 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *st1, const char *st2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;

	i = 0;
	s1 = (unsigned char*)st1;
	s2 = (unsigned char*)st2;
	if (n == 0)
		return (0);
	n--;
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n))
	{
		i++;
	}
	return ((int)(s1[i] - s2[i]));
}

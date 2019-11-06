/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:11:17 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/20 13:36:39 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_len(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		n = -n;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int nm)
{
	int				count;
	char			*ar;
	int				minus;
	long long int	n;

	n = (long long int)nm;
	minus = 1;
	count = ft_len(n);
	if (!(ar = (char*)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	ar[ft_len(n)] = '\0';
	if (n < 0)
	{
		n = -n;
		minus = -1;
	}
	while (--count >= 0)
	{
		ar[count] = (char)((n % 10) + 48);
		n = n / 10;
	}
	if (minus < 0)
		ar[0] = '-';
	return (ar);
}

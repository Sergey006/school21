/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:14:56 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/06 21:21:51 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	size_t	i;

	i = 0;
	if (f && s)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:17:58 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/22 12:43:09 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!alst || !(*alst) || !del)
		return ;
	ptr = *alst;
	while (ptr)
	{
		tmp = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = tmp;
	}
	*alst = NULL;
}

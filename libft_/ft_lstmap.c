/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:43:37 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/22 16:35:10 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current;
	t_list	*tmp;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(current = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	start = current;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(current->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		current = current->next;
		lst = lst->next;
	}
	return (start);
}

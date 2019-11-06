/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:41:20 by bstanton          #+#    #+#             */
/*   Updated: 2019/09/05 15:50:02 by bstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb >= 0 && nb < 13)
	{
		result = 1;
		while (nb > 1)
		{
			result = nb * result;
			nb--;
		}
		return (result);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_10_more.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:32 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 20:49:01 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nb_inferior_to_tab(t_stack *stacka, int nb)
{
	int	i;

	i = stacka->pos;
	while (i < stacka->size - 1)
	{
		if (nb < stacka->tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_nb_superior_to_tab(t_stack *stacka, int nb)
{
	int	i;

	i = stacka->pos;
	while (i < stacka->size - 1)
	{
		if (nb > stacka->tab[i])
			return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_len_10_more.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:04:16 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 21:23:56 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stackc(t_stack *stackc)
{
	int	strong;
	int	permut;
	int	i;
	int	tmp;

	strong = -1;
	permut = 0;
	while (permut == 0)
	{
		permut = 1;
		strong++;
		i = 0;
		while (i < stackc->size - 2 - strong)
		{
			if (stackc->tab[i] > stackc->tab[i + 1])
			{
				permut = 0;
				tmp = stackc->tab[i];
				stackc->tab[i] = stackc->tab[i + 1];
				stackc->tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

void	ft_put_min_on_top(t_stack *stacka)
{
	int	i;

	i = ((stacka->size - 1) - ((stacka->size - stacka->pos) / 2));
	while (ft_find_minimum(stacka) != 0)
	{
		if (ft_find_minimum(stacka) <= i)
			ra_swap(stacka);
		else
			rra_swap(stacka);
	}
}

void	ft_sort_min_to_top(t_stack *stacka, t_stack *stackb)
{
	int	i;

	if (stacka->pos < 0)
		stacka->pos = 0;
	while (stackb->pos < stackb->size - 1)
	{
		ft_rb_or_rrb(stacka, stackb);
		i = stacka->pos;
		while (i == stacka->pos)
			ft_push_or_not(stacka, stackb);
	}
	ft_put_min_on_top(stacka);
}

void	ft_sort_ten_and_more(t_stack *stacka, t_stack *stackb, t_stack *stackc)
{
	(void)stackb;
	ft_sort_stackc(stackc);
	ft_pb_bad_int(stacka, stackb, stackc);
	while (stackb->pos < stackb->size - 1)
		ft_sort_min_to_top(stacka, stackb);
}

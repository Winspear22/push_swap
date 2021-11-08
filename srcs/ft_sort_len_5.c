/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_len_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:04:41 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:04:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *stacka)
{
	int	pos;

	pos = stacka->pos;
	if (stacka->tab[pos] < stacka->tab[pos + 1]
		&& stacka->tab[pos + 1] < stacka->tab[pos + 2])
		return ;
	if (stacka->tab[pos] < stacka->tab[pos + 1])
	{
		rra_swap(stacka);
		if (stacka->tab[pos] > stacka->tab[pos + 1])
			sa_swap(stacka);
	}
	else if (stacka->tab[pos + 1] > stacka->tab[pos + 2])
	{
		sa_swap(stacka);
		rra_swap(stacka);
	}
	else
	{
		if (stacka->tab[pos] < stacka->tab[pos + 2])
			sa_swap(stacka);
		else
			ra_swap(stacka);
	}
}

void	ft_sort_four(t_stack *stacka, t_stack *stackb)
{
	int	pos;

	if (already_try(stacka) == 0)
	{
		pb_swap(stacka, stackb);
		ft_sort_three(stacka);
	}
	if (stacka->no_try != 1)
		pa_swap(stacka, stackb);
	pos = stacka->pos;
	if (stacka->tab[pos] > stacka->tab[pos + 1]
		&& stacka->tab[pos] < stacka->tab[pos + 2])
		sa_swap(stacka);
	else if (stacka->tab[pos] > stacka->tab[stacka->size - 2])
		ra_swap(stacka);
	else if (stacka->tab[pos] > stacka->tab[pos + 2]
		&& stacka->tab[pos] < stacka->tab[pos + 3])
	{
		rra_swap(stacka);
		sa_swap(stacka);
		ra_swap(stacka);
		ra_swap(stacka);
	}
}

void	ft_sort_five(t_stack *stacka, t_stack *stackb)
{	
	while (stacka->pos < 2)
	{
		while (find_min(stacka) >= 2)
			rra_swap(stacka);
		if (find_min(stacka) == stacka->pos + 1)
			sa_swap(stacka);
		pb_swap(stacka, stackb);
	}	
	ft_sort_three(stacka);
	while (stacka->pos > 0)
		pa_swap(stacka, stackb);
}

void	ft_sort_5_less(int argc, t_stack *stacka,
		t_stack *stackb, t_stack *stackc)
{	
	if (argc == 2)
		ft_sort_two(stacka);
	else if (argc == 3)
		ft_sort_three(stacka);
	else if (argc == 4)
		ft_sort_four(stacka, stackb);
	else if (argc == 5)
		ft_sort_five(stacka, stackb);
}

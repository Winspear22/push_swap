/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:07:59 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:08:02 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_try(t_stack *t_stack)
{
	int	a;

	a = 1;
	while (a <= t_stack->size - 1)
	{
		if (a == t_stack->size - 2)
		{
			if (t_stack->tab[a] < t_stack->tab[a + 1])
			{
				t_stack->no_try = 1;
				return (1);
			}
		}
		else if (t_stack->tab[a] > t_stack->tab[a + 1])
			return (0);
		a++;
	}
	t_stack->no_try = 1;
	return (1);
}

int	find_min(t_stack *t_stack)
{
	int	a;

	a = t_stack->pos + 1;
	t_stack->min = t_stack->tab[t_stack->pos];
	while (a < t_stack->size - 1)
	{
		if (t_stack->tab[a] < t_stack->min)
			t_stack->min = t_stack->tab[a];
		a++;
	}
	a = 0;
	while (t_stack->tab[a] != t_stack->min)
		a++;
	return (a);
}

void	ft_sort_two(t_stack *stacka)
{
	rra_swap(stacka);
}

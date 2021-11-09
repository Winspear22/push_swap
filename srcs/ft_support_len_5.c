/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:07:59 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 21:26:41 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_almost_all_sorted(t_stack *t_stack)
{
	int	a;

	a = 1;
	while (a <= t_stack->size - 1)
	{
		if (a == t_stack->size - 2)
		{
			if (t_stack->tab[a] < t_stack->tab[a + 1])
			{
				t_stack->almost_sorted = 1;
				return (1);
			}
		}
		else if (t_stack->tab[a] > t_stack->tab[a + 1])
			return (0);
		a++;
	}
	t_stack->almost_sorted = 1;
	return (1);
}

int	ft_find_minimum(t_stack *t_stack)
{
	int	i;

	i = t_stack->pos + 1;
	t_stack->min = t_stack->tab[t_stack->pos];
	while (i < t_stack->size - 1)
	{
		if (t_stack->tab[i] < t_stack->min)
			t_stack->min = t_stack->tab[i];
		i++;
	}
	i = 0;
	while (t_stack->tab[i] != t_stack->min)
		i++;
	return (i);
}

int	ft_find_maximum(t_stack *t_stack)
{
	int	i;

	i = t_stack->pos + 1;
	t_stack->max = t_stack->tab[t_stack->pos];
	while (i < t_stack->size - 1)
	{
		if (t_stack->tab[i] > t_stack->max)
			t_stack->max = t_stack->tab[i];
		i++;
	}
	i = 0;
	while (t_stack->tab[i] != t_stack->max)
		i++;
	return (i);
}

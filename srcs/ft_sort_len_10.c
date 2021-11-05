/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_len_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:51:12 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 20:04:47 by adaloui          ###   ########.fr       */
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

void	ft_sort_two(t_stack *stackA)
{
	renverse_a(stackA);
}

void	ft_sort_three(t_stack *stackA)
{
	int	pos;

	pos = stackA->pos;
	if (stackA->tab[pos] < stackA->tab[pos + 1]
		&& stackA->tab[pos + 1] < stackA->tab[pos + 2])
		return ;
	if (stackA->tab[pos] < stackA->tab[pos + 1])
	{
		renverse_a(stackA);
		if (stackA->tab[pos] > stackA->tab[pos + 1])
			swap_a(stackA);
	}
	else if (stackA->tab[pos + 1] > stackA->tab[pos + 2])
	{
		swap_a(stackA);
		renverse_a(stackA);
	}
	else
	{
		if (stackA->tab[pos] < stackA->tab[pos + 2])
			swap_a(stackA);
		else
			rotate_a(stackA);
	}
}

void	ft_sort_four(t_stack *stackA, t_stack *stackB)
{
	int	pos;

	if (already_try(stackA) == 0)
	{
		push_b(stackA, stackB);
		ft_sort_three(stackA);
	}
	if (stackA->no_try != 1)
		push_a(stackA, stackB);
	pos = stackA->pos;
	if (stackA->tab[pos] > stackA->tab[pos + 1]
		&& stackA->tab[pos] < stackA->tab[pos + 2])
		swap_a(stackA);
	else if (stackA->tab[pos] > stackA->tab[stackA->size - 2])
		rotate_a(stackA);
	else if (stackA->tab[pos] > stackA->tab[pos + 2]
		&& stackA->tab[pos] < stackA->tab[pos + 3])
	{
		renverse_a(stackA);
		swap_a(stackA);
		rotate_a(stackA);
		rotate_a(stackA);
	}
}

void	ft_sort_five(t_stack *stackA, t_stack *stackB)
{	
	while (stackA->pos < 2)
	{
		while (find_min(stackA) >= 2)
			renverse_a(stackA);
		if (find_min(stackA) == stackA->pos + 1)
			swap_a(stackA);
		push_b(stackA, stackB);
	}	
	ft_sort_three(stackA);
	while (stackA->pos > 0)
		push_a(stackA, stackB);
}

void	ft_sort_5_less(int argc, t_stack *stackA, t_stack *stackB, t_stack *stackC)
{	
	if (argc == 2)
		ft_sort_two(stackA);
	else if (argc == 3)
		ft_sort_three(stackA);
	else if (argc == 4)
		ft_sort_four(stackA, stackB);
	else if (argc == 5)
		ft_sort_five(stackA, stackB);
}

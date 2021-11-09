/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_10_more_3.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:07:06 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 20:49:01 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_max_int(t_stack *stackb, int count, int c)
{
	if (count < stackb->max_int)
	{
		stackb->max_int = count;
		stackb->nb_of_max_int = stackb->tab[c];
		stackb->pos_of_max_int = c;
		stackb->count_super_a = stackb->count_a;
		stackb->count_super_b = stackb->count_b;
	}
}

int	ft_best_count_stackb(t_stack *stackb, int i)
{
	int	med_b;
	int	count;

	count = 0;
	med_b = ((stackb->size - 1) - ((stackb->size - stackb->pos) / 2));
	if (i < med_b)
		count = i - stackb->pos;
	else
		count = stackb->size - 1 - i;
	stackb->count_b = count;
	return (count);
}

int	ft_count_on_stack(t_stack *stacka, int stack_a, int i)
{
	int	count;

	count = 0;
	if (i < stack_a)
		count = i - stacka->pos;
	else
		count = stacka->size - i;
	return (count);
}

int	ft_best_count_stacka(t_stack *stacka, t_stack *stackb, int d, int c)
{
	int	stack_a;
	int	count;

	count = 0;
	stack_a = ((stacka->size - 1) - ((stacka->size - stacka->pos) / 2));
	if (stacka->tab[d] > stackb->tab[c] && stacka->tab[d - 1] < stackb->tab[c])
		count += ft_count_on_stack(stacka, stack_a, d);
	else if (ft_nb_inferior_to_tab(stacka, stackb->tab[c]) == 1
		&& stacka->tab[d] == stacka->tab[ft_find_minimum(stacka)])
		count += ft_count_on_stack(stacka, stack_a, d);
	else if (ft_nb_superior_to_tab(stacka, stackb->tab[c]) == 1
		&& stacka->tab[d] == stacka->tab[ft_find_minimum(stacka)])
		count += ft_count_on_stack(stacka, stack_a, d);
	return (count);
}

void	ft_best_count(t_stack *stacka, t_stack *stackb)
{
	int	i;
	int	j;
	int	count;

	i = stackb->pos - 1;
	while (++i < stackb->size - 1)
	{
		count = ft_best_count_stackb(stackb, i);
		j = stacka->pos;
		if (stacka->tab[j] > stackb->tab[i]
			&& stacka->tab[stacka->size - 2] < stackb->tab[i])
			count++;
		else
		{
			j++;
			count++;
			stackb->count_a++;
			while (j < stacka->size - 1)
			{
				count += ft_best_count_stacka(stacka, stackb, j, i);
				j++;
			}
		}
		ft_find_max_int(stackb, count, i);
	}
}

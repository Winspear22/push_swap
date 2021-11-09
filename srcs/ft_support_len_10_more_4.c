/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_10_more_4.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:07:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 21:25:56 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_bad_int(t_stack *stacka, t_stack *stackb, t_stack *stackc)
{
	int	i;
	int	j;

	i = 0;
	j = stackc->tab[(stacka->size - 1) - ((stacka->size - stacka->pos) / 2)];
	while (i < stacka->size - 3)
	{
		pb_swap(stacka, stackb);
		if (stackb->tab[stackb->pos] < j)
			rb_swap(stackb);
		i++;
	}
}

void	ft_ra_or_rra(t_stack *stacka, t_stack *stackb)
{
	int	i;

	i = stacka->pos;
	if (stacka->tab[i] > stackb->tab[stackb->pos]
		&& stacka->tab[stacka->size - 2] < stackb->tab[stackb->pos])
		stacka->rra++;
	else
	{
		i = stacka->pos + 1;
		while (i < stacka->size - 1)
		{
			if (stacka->tab[i] > stackb->tab[stackb->pos]
				&& stacka->tab[i - 1] < stackb->tab[stackb->pos])
				break ;
			if (ft_nb_inferior_to_tab(stacka, stackb->tab[stackb->pos]) == 1
				&& stacka->tab[i] == stacka->tab[ft_find_minimum(stacka)])
				break ;
			if (ft_nb_superior_to_tab(stacka, stackb->tab[stackb->pos]) == 1
				&& stacka->tab[i] == stacka->tab[ft_find_minimum(stacka)])
				break ;
			i++;
		}
	}
	ft_choose_ra_rra_plus(stacka, i);
	ft_choose_rotate_or_renverse(stacka, stackb);
}

void	ft_push_or_not(t_stack *stacka, t_stack *stackb)
{
	if (ft_nb_inferior_to_tab(stacka, stackb->tab[stackb->pos]) == 1
		&& stacka->tab[stacka->pos] == stacka->tab[ft_find_minimum(stacka)])
		pa_swap(stacka, stackb);
	else if (ft_nb_superior_to_tab(stacka, stackb->tab[stackb->pos]) == 1
		&& stacka->tab[stacka->size - 2]
		== stacka->tab[ft_find_maximum(stacka)])
		pa_swap(stacka, stackb);
	else if (stackb->tab[stackb->pos] < stacka->tab[stacka->pos]
		&& stackb->tab[stackb->pos] > stacka->tab[stacka->size - 2])
		pa_swap(stacka, stackb);
	else
		ft_ra_or_rra(stacka, stackb);
}

void	ft_rb_or_rrb(t_stack *stacka, t_stack *stackb)
{
	int	i;
	int	stack_b;

	stackb->max_int = 2147483647;
	stackb->nb_of_max_int = 0;
	stackb->pos_of_max_int = 0;
	ft_best_count(stacka, stackb);
	stack_b = ((stackb->size - 1) - ((stackb->size - stackb->pos) / 2));
	if (stackb->pos_of_max_int > stack_b)
		i = stackb->size - 1 - stackb->pos_of_max_int;
	else
		i = stackb->pos_of_max_int - stackb->pos;
	while (i > 0 && stackb->pos < stackb->size - 2)
	{		
		if (stackb->pos_of_max_int < stack_b)
		{
			stackb->rb++;
			i--;
		}
		else
		{
			stackb->rrb++;
			i--;
		}
	}
}

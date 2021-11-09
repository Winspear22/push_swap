/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_10_more_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:50 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 21:08:33 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_choose_ra_rra_plus(t_stack *stacka, int i)
{
	int	j;

	j = ((stacka->size - 1) - ((stacka->size - stacka->pos) / 2));
	if (i < j)
		stacka->ra++;
	else
		stacka->rra++;
}

void	ft_choose_rotate_or_renverse(t_stack *stacka, t_stack *stackb)
{
	while (stacka->ra > 0 && stackb->rb > 0)
	{
		rr_swap(stacka, stackb);
		stacka->ra--;
		stackb->rb--;
	}
	while (stacka->rra > 0 && stackb->rrb > 0)
	{
		rrr_swap(stacka, stackb);
		stacka->rra--;
		stackb->rrb--;
	}
	ft_rotate_stacks(stacka, stackb);
	ft_renverse_stacks(stacka, stackb);
}

void	ft_rotate_stacks(t_stack *stacka, t_stack *stackb)
{
	while (stacka->ra > 0 && stackb->rb <= 0)
	{
		ra_swap(stacka);
		stacka->ra--;
	}
	while (stacka->ra <= 0 && stackb->rb > 0)
	{	
		rb_swap(stackb);
		stackb->rb--;
	}
}

void	ft_renverse_stacks(t_stack *stacka, t_stack *stackb)
{
	while (stacka->rra > 0 && stackb->rrb <= 0)
	{
		rra_swap(stacka);
		stacka->rra--;
	}
	while (stacka->rra <= 0 && stackb->rrb > 0)
	{
		rrb_swap(stackb);
		stackb->rrb--;
	}
}

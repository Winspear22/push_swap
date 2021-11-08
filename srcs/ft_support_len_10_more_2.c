/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_len_10_more_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:50 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:06:52 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_dont_know_choose_between_two_beauties(t_stack *t_a, int a)
{
	int	med;

	med = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	if (a < med)
		t_a->for_ra++;
	else
		t_a->for_rra++;
}

void	this_is_my_choice(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_ra > 0 && t_b->for_rb > 0)
	{
		rr_swap(t_a, t_b);
		t_a->for_ra--;
		t_b->for_rb--;
	}
	while (t_a->for_rra > 0 && t_b->for_rrb > 0)
	{
		rrr_swap(t_a, t_b);
		t_a->for_rra--;
		t_b->for_rrb--;
	}
	i_love_rotate_you(t_a, t_b);
	i_love_renverse_you(t_a, t_b);
}

void	i_love_rotate_you(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_ra > 0 && t_b->for_rb <= 0)
	{
		ra_swap(t_a);
		t_a->for_ra--;
	}
	while (t_a->for_ra <= 0 && t_b->for_rb > 0)
	{	
		rb_swap(t_b);
		t_b->for_rb--;
	}
}

void	i_love_renverse_you(t_stack *t_a, t_stack *t_b)
{
	while (t_a->for_rra > 0 && t_b->for_rrb <= 0)
	{
		rra_swap(t_a);
		t_a->for_rra--;
	}
	while (t_a->for_rra <= 0 && t_b->for_rrb > 0)
	{
		rrb_swap(t_b);
		t_b->for_rrb--;
	}
}

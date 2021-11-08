/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_len_10_more.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:04:16 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:04:21 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ghost(t_stack *t_ghost)
{
	int	strong;
	int	permut;
	int	a;
	int	tmp;

	strong = -1;
	permut = 0;
	while (permut == 0)
	{
		permut = 1;
		strong++;
		a = 0;
		while (a < t_ghost->size - 2 - strong)
		{
			if (t_ghost->tab[a] > t_ghost->tab[a + 1])
			{
				permut = 0;
				tmp = t_ghost->tab[a];
				t_ghost->tab[a] = t_ghost->tab[a + 1];
				t_ghost->tab[a + 1] = tmp;
			}
			a++;
		}
	}
}

void	ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	int	a;

	a = t_a->pos;
	if (t_a->tab[a] > t_b->tab[t_b->pos]
		&& t_a->tab[t_a->size - 2] < t_b->tab[t_b->pos])
		t_a->for_rra++;
	else
	{
		a = t_a->pos + 1;
		while (a < t_a->size - 1)
		{
			if (t_a->tab[a] > t_b->tab[t_b->pos]
				&& t_a->tab[a - 1] < t_b->tab[t_b->pos])
				break ;
			if (is_the_warrior_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[a] == t_a->tab[find_min(t_a)])
				break ;
			if (is_the_nain_of_stack(t_a, t_b->tab[t_b->pos]) == 1
				&& t_a->tab[a] == t_a->tab[find_min(t_a)])
				break ;
			a++;
		}
	}
	i_dont_know_choose_between_two_beauties(t_a, a);
	this_is_my_choice(t_a, t_b);
}

void	rb_or_rrb_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	int	i;
	int	med_b;

	t_b->super_count = 2147483647;
	t_b->nb_of_super_count = 0;
	t_b->pos_of_super_count = 0;
	the_best_coup_on_bed(t_a, t_b);
	med_b = ((t_b->size - 1) - ((t_b->size - t_b->pos) / 2));
	if (t_b->pos_of_super_count > med_b)
		i = t_b->size - 1 - t_b->pos_of_super_count;
	else
		i = t_b->pos_of_super_count - t_b->pos;
	while (i > 0 && t_b->pos < t_b->size - 2)
	{		
		if (t_b->pos_of_super_count < med_b)
		{
			t_b->for_rb++;
			i--;
		}
		else
		{
			t_b->for_rrb++;
			i--;
		}
	}
}

void	push_or_not_push_thats_the_question(t_stack *t_a, t_stack *t_b)
{
	if (is_the_warrior_of_stack(t_a, t_b->tab[t_b->pos]) == 1
		&& t_a->tab[t_a->pos] == t_a->tab[find_min(t_a)])
		pa_swap(t_a, t_b);
	else if (is_the_nain_of_stack(t_a, t_b->tab[t_b->pos]) == 1
		&& t_a->tab[t_a->size - 2] == t_a->tab[find_max(t_a)])
		pa_swap(t_a, t_b);
	else if (t_b->tab[t_b->pos] < t_a->tab[t_a->pos]
		&& t_b->tab[t_b->pos] > t_a->tab[t_a->size - 2])
		pa_swap(t_a, t_b);
	else
		ra_or_rra_thats_the_question(t_a, t_b);
}

void	star_on_the_top(t_stack *t_a)
{
	int	med;

	med = ((t_a->size - 1) - ((t_a->size - t_a->pos) / 2));
	while (find_min(t_a) != 0)
	{
		if (find_min(t_a) <= med)
			ra_swap(t_a);
		else
			rra_swap(t_a);
	}
}

void	insert_inspi_here(t_stack *t_a, t_stack *t_b)
{
	int	a;

	if (t_a->pos < 0)
		t_a->pos = 0;
	while (t_b->pos < t_b->size - 1)
	{
		rb_or_rrb_thats_the_question(t_a, t_b);
		a = t_a->pos;
		while (a == t_a->pos)
			push_or_not_push_thats_the_question(t_a, t_b);
	}
	star_on_the_top(t_a);
}

int	the_decroissance(t_stack *t_stacka)
{
	int	a;

	a = 0;
	while (a < t_stacka->size - 2)
	{
		if (t_stacka->tab[a] < t_stacka->tab[a + 1])
			return (1);
		a++;
	}
	return (0);
}

void	vers_le_stonks(t_stack *t_stacka, t_stack *t_stackb)
{
	int	a;

	a = 0;
	while (t_stacka->pos < t_stacka->size - 1)
	{
		pb_swap(t_stacka, t_stackb);
		a++;
	}	
	a = 0;
	while (t_stackb->pos < t_stackb->size - 1)
	{		
		rrb_swap(t_stackb);
		pa_swap(t_stacka, t_stackb);
		a++;
	}
}

void	chuck_your_wife(t_stack *t_a, t_stack *t_b, t_stack *t_g)
{
	int	med_g;
	int	i;

	i = 0;
	med_g = t_g->tab[(t_a->size - 1) / 2];
	while (i < t_a->size - 1)
	{
		if (t_a->tab[t_a->pos] < med_g)
			pb_swap(t_a, t_b);
		else
			ra_swap(t_a);
		i++;
	}
	while (t_a->pos <= t_a->size - 5)
		pb_swap(t_a, t_b);
	ft_sort_three(t_a);
}

void	ft_sort_ten_and_more(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost)
{
	(void)t_stackb;
	sort_ghost(t_ghost);
	if (the_decroissance(t_stacka) == 0)
		vers_le_stonks(t_stacka, t_stackb);
	else
	{
		pb_swap_only_bads(t_stacka, t_stackb, t_ghost);
		while (t_stackb->pos < t_stackb->size - 1)
			insert_inspi_here(t_stacka, t_stackb);
	}
}

void	ft_sort_5_more(int argc, t_stack *stacka, t_stack *stackb, t_stack *stackc)
{
	if (argc > 5)
		ft_sort_ten_and_more(stacka, stackb, stackc);
}

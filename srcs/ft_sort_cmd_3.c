/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:09:08 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 18:01:17 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_swap(t_stack *stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stacka->size - 2;
	a = the_last;
	swapper = stacka->tab[the_last];
	while (a > stacka->pos)
	{
		stacka->tab[a] = stacka->tab[a - 1];
		a--;
	}
	stacka->tab[stacka->pos] = swapper;
	ft_putstr_fd("rra\n", 1);
}

void	rrb_swap(t_stack *stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackb->size - 2;
	a = the_last;
	swapper = stackb->tab[the_last];
	while (a > stackb->pos)
	{
		stackb->tab[a] = stackb->tab[a - 1];
		a--;
	}
	stackb->tab[stackb->pos] = swapper;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr_swap(t_stack *stacka, t_stack *stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stacka->size - 2;
	a = the_last;
	swapper = stacka->tab[the_last];
	while (a > stacka->pos)
	{
		stacka->tab[a] = stacka->tab[a - 1];
		a--;
	}
	stacka->tab[stacka->pos] = swapper;
	the_last = stackb->size - 2;
	a = the_last;
	swapper = stackb->tab[the_last];
	while (a > stackb->pos)
	{
		stackb->tab[a] = stackb->tab[a - 1];
		a--;
	}
	stackb->tab[stackb->pos] = swapper;
	ft_putstr_fd("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:00:05 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 19:24:55 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_swap(t_stack *stacka)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stacka->size - 2;
	a = stacka->pos + 1;
	swapper = stacka->tab[stacka->pos];
	while (a <= the_last)
	{
		stacka->tab[a - 1] = stacka->tab[a];
		a++;
	}
	stacka->tab[the_last] = swapper;
	ft_putstr_fd("ra\n", 1);
}

void	rb_swap(t_stack *stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackb->size - 2;
	a = stackb->pos + 1;
	swapper = stackb->tab[stackb->pos];
	while (a <= the_last)
	{
		stackb->tab[a - 1] = stackb->tab[a];
		a++;
	}
	stackb->tab[the_last] = swapper;
	ft_putstr_fd("rb\n", 1);
}

void	rr_swap(t_stack *stacka, t_stack *stackb)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stacka->size - 2;
	a = stacka->pos + 1;
	swapper = stacka->tab[stacka->pos];
	while (a <= the_last)
	{
		stacka->tab[a - 1] = stacka->tab[a];
		a++;
	}
	stacka->tab[the_last] = swapper;
	the_last = stackb->size - 2;
	a = stackb->pos + 1;
	swapper = stackb->tab[stackb->pos];
	while (a <= the_last)
	{
		stackb->tab[a - 1] = stackb->tab[a];
		a++;
	}
	stackb->tab[the_last] = swapper;
	ft_putstr_fd("rr\n", 1);
}

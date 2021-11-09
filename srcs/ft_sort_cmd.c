/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:08:00 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 18:01:17 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_swap(t_stack *stacka)
{
	int	swapper;

	swapper = stacka->tab[stacka->pos];
	stacka->tab[stacka->pos] = stacka->tab[stacka->pos + 1];
	stacka->tab[stacka->pos + 1] = swapper;
	ft_putstr_fd("sa\n", 1);
}

void	sb_swap(t_stack *stackb)
{
	int	swapper;

	swapper = stackb->tab[stackb->pos];
	stackb->tab[stackb->pos] = stackb->tab[stackb->pos + 1];
	stackb->tab[stackb->pos + 1] = swapper;
	ft_putstr_fd("sb\n", 1);
}

void	ss_swap(t_stack *stacka, t_stack *stackb)
{
	int	swapper;

	swapper = stacka->tab[stacka->pos];
	stacka->tab[stacka->pos] = stacka->tab[stacka->pos + 1];
	stacka->tab[stacka->pos + 1] = swapper;
	swapper = stackb->tab[stackb->pos];
	stackb->tab[stackb->pos] = stackb->tab[stackb->pos + 1];
	stackb->tab[1] = swapper;
	ft_putstr_fd("ss\n", 1);
}

void	pa_swap(t_stack *stacka, t_stack *stackb)
{
	int	swapper;

	swapper = stackb->tab[stackb->pos];
	stacka->tab[stacka->pos - 1] = swapper;
	stackb->tab[stackb->pos] = 0;
	stackb->pos++;
	stacka->pos--;
	ft_putstr_fd("pa\n", 1);
}

void	pb_swap(t_stack *stacka, t_stack *stackb)
{
	int	swapper;

	swapper = stacka->tab[stacka->pos];
	stackb->tab[stackb->pos - 1] = swapper;
	stacka->tab[stacka->pos] = 0;
	stacka->pos++;
	stackb->pos--;
	ft_putstr_fd("pb\n", 1);
}

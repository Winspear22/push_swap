/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:59:51 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 20:52:05 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacka(t_stack *stacka, int argc)
{
	stacka->size = argc;
	stacka->pos = 0;
	stacka->max = 0;
	stacka->min = 0;
	stacka->almost_sorted = 0;
	stacka->first_bien_tried = 0;
	stacka->len_of_long_serie = 1;
	stacka->ra = 0;
	stacka->rra = 0;
}

void	ft_init_stackb(t_stack *stackb, int argc)
{
	stackb->size = argc;
	stackb->pos = argc - 1;
	stackb->max = 0;
	stackb->min = 0;
	stackb->almost_sorted = 0;
	stackb->rb = 0;
	stackb->rrb = 0;
}

void	ft_init_stackc(t_stack *stackc, int argc)
{
	stackc->size = argc;
	stackc->pos = 0;
	stackc->max = 0;
	stackc->min = 0;
	stackc->almost_sorted = 0;
}

void	ft_mem_init_stacka(t_stack *stacka, char **tab)
{
	int	a;

	a = 0;
	stacka->tab = malloc(sizeof(long int) * stacka->size - 1);
	if (!stacka->tab)
		return ;
	while (a < stacka->size - 1)
	{
		stacka->tab[a] = ft_atoi_2(tab[a + 1], stacka);
		a++;
	}
}

void	ft_mem_init_stackb(t_stack *stackb)
{
	int	a;

	a = 0;
	stackb->tab = malloc(sizeof(long int) * stackb->size - 1);
	if (!stackb->tab)
		return ;
	while (a < stackb->size - 1)
	{
		stackb->tab[a] = 0;
		a++;
	}
}

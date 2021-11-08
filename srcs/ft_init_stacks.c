/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:59:51 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 20:53:17 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacka(t_stack *stacka, int argc)
{
	stacka->size = argc;
	stacka->pos = 0;
	stacka->max = 0;
	stacka->min = 0;
	stacka->no_try = 0;
	stacka->first_bien_tried = 0;
	stacka->len_of_long_serie = 1;
	stacka->for_ra = 0;
	stacka->for_rra = 0;
}

void	ft_init_stackb(t_stack *stackb, int argc)
{
	stackb->size = argc;
	stackb->pos = argc - 1;
	stackb->max = 0;
	stackb->min = 0;
	stackb->no_try = 0;
	stackb->for_rb = 0;
	stackb->for_rrb = 0;
}

void	ft_init_stackc(t_stack *stackc, int argc)
{
	stackc->size = argc;
	stackc->pos = 0;
	stackc->max = 0;
	stackc->min = 0;
	stackc->no_try = 0;
}

void	putintab(t_stack *stacka, char **tab)
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

void	init_tab(t_stack *stackb)
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

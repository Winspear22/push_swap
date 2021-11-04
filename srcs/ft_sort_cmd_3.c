/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:09:08 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 18:10:41 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int    *rra_swap(int *stackA, int *stackB, int argc)
{
    int tmp;
    int tmp2;
    int i;
    int j;

    i = argc - 1;
    j = argc - 2;
    while(j > 0)
    {
        tmp = stackA[j];
        stackA[j] = stackA[j - 1];
        stackA[j - 1] = tmp;
        j--;
    }
    ft_putstr_fd("rra\n", 0);
    return (stackA);
}

int    *rrb_swap(int *stackA, int *stackB, int argc)
{
    int tmp;
    int tmp2;
    int i;
    int j;

    i = argc - 1;
    j = argc - 2;
    while(j > 0)
    {
        tmp = stackB[j];
        stackB[j] = stackB[j - 1];
        stackB[j - 1] = tmp;
        j--;
    }
    ft_putstr_fd("rrb\n", 0);
    return (stackB);
}

int    *rrr_swap(int *stackA, int *stackB, int argc)
{
    rra_swap(stackA, stackB, argc);
    rrb_swap(stackA, stackB, argc);
    ft_putstr_fd("rrr\n", 0);
    return (stackA);
}*/

void	renverse_a(t_stack *stackA)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackA->size - 2;
	a = the_last;
	swapper = stackA->tab[the_last];
	while (a > stackA->pos)
	{
		stackA->tab[a] = stackA->tab[a - 1];
		a--;
	}
	stackA->tab[stackA->pos] = swapper;
	ft_putstr_fd("rra\n", 1);
}

void	renverse_b(t_stack *stackB)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackB->size - 2;
	a = the_last;
	swapper = stackB->tab[the_last];
	while (a > stackB->pos)
	{
		stackB->tab[a] = stackB->tab[a - 1];
		a--;
	}
	stackB->tab[stackB->pos] = swapper;
	ft_putstr_fd("rrb\n", 1);
}

void	double_renverse(t_stack *stackA, t_stack *stackB)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackA->size - 2;
	a = the_last;
	swapper = stackA->tab[the_last];
	while (a > stackA->pos)
	{
		stackA->tab[a] = stackA->tab[a - 1];
		a--;
	}
	stackA->tab[stackA->pos] = swapper;
	the_last = stackB->size - 2;
	a = the_last;
	swapper = stackB->tab[the_last];
	while (a > stackB->pos)
	{
		stackB->tab[a] = stackB->tab[a - 1];
		a--;
	}
	stackB->tab[stackB->pos] = swapper;
	ft_putstr_fd("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:08:00 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 18:20:26 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int *sa_swap(int *stackA, int argc)
{
	int tmp;

	if (argc - 1 == 1 || argc - 1 == 0)
		exit (0);
	else
	{
		tmp = stackA[0];
		stackA[0] = stackA[1];
		stackA[1] = tmp;
		ft_putstr_fd_fd("sa\n", 0);
	}
	return (stackA);
}*/

void	swap_a(t_stack *stackA)
{
	int	swapper;

	swapper = stackA->tab[stackA->pos];
	stackA->tab[stackA->pos] = stackA->tab[stackA->pos + 1];
	stackA->tab[stackA->pos + 1] = swapper;
	ft_putstr_fd("sa\n", 1);
}
/*
int *sb_swap(int *stackB, int argc)
{
	int tmp;

	if (argc - 1 == 1 || argc - 1 == 0)
		exit (0);
	else
	{
		tmp = stackB[0];
		stackB[0] = stackB[1];
		stackB[1] = tmp;
		ft_putstr_fd("sb\n", 0);
	}
	return (stackB);
}*/

void	swap_b(t_stack *stackB)
{
	int	swapper;

	swapper = stackB->tab[stackB->pos];
	stackB->tab[stackB->pos] = stackB->tab[stackB->pos + 1];
	stackB->tab[stackB->pos + 1] = swapper;
	ft_putstr_fd("sb\n", 1);
}

/*int *ss_swap(int *stackA, int *stackB, int argc)
{
    sa_swap(stackA, argc);
    sb_swap(stackB, argc);
    ft_putstr_fd("ss\n", 0);
	return (stackA);
}*/

void	double_swap(t_stack *stackA, t_stack *stackB)
{
	int	swapper;

	swapper = stackA->tab[stackA->pos];
	stackA->tab[stackA->pos] = stackA->tab[stackA->pos + 1];
	stackA->tab[stackA->pos + 1] = swapper;
	swapper = stackB->tab[stackB->pos];
	stackB->tab[stackB->pos] = stackB->tab[stackB->pos + 1];
	stackB->tab[1] = swapper;
	ft_putstr_fd("ss\n", 1);
}

/*int   *pa_swap(int *stackA, int *stackB, int argc)
{
    if (stackB[0])
	{
        stackA[0] = stackB[0];
	}
	ft_putstr_fd_fd("pa\n", 0);
	return (stackA);
}*/

void	push_a(t_stack *stackA, t_stack *stackB)
{
	int	swapper;
	
	swapper = stackB->tab[stackB->pos];
	stackA->tab[stackA->pos - 1] = swapper;
	stackB->tab[stackB->pos] = 0;
	stackB->pos++;
	stackA->pos--;
	ft_putstr_fd("pa\n", 1);
}

/*int   *pb_swap(int *stackA, int *stackB, int argc)
{
    if (stackA[0])
	{
		stackB[0] = stackA[0];
        stackB[0] = stackA[0];
	}
	ft_putstr_fd_fd("pb\n", 0);
	return (stackB);
}*/

void	push_b(t_stack *stackA, t_stack *stackB)
{
	int	swapper;

	swapper = stackA->tab[stackA->pos];
	stackB->tab[stackB->pos - 1] = swapper;
	stackA->tab[stackA->pos] = 0;
	stackA->pos++;
	stackB->pos--;
	ft_putstr_fd("pb\n", 1);
}
